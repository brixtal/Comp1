
/*
	Arquivo: t22.c
	Autor: Andr� Reis de Brito
*/

#include <SDL/SDL.h> //usaremos funcoes da SDL
#include <SDL/SDL_image.h> //e SDL_image

#define SCREEN_W 640 //tamanho da janela que sera criada
#define SCREEN_H 480

#define ERRO -1

typedef struct _OBJETO
{
	SDL_Surface *imagem;
	SDL_Rect posicao;
	int incx, incy;
} OBJETO;


void update_positions(OBJETO *b)
{
	
	//atualizar a superficie BMP
	b->posicao.x += b->incx;
	b->posicao.y += b->incy;
}


int main(int argc, char** argv) //funcao de entrada
{
	Uint32 cor_fundo;
    SDL_Event event; //um evento enviado pela SDL
    int quit = 0; //devemos encerrar o programa? 
	SDL_Surface* screen; //superficie que representa a tela do computador
	OBJETO bmp, png, alpha;
	SDL_Rect lixo, lixo2;


 	if (-1 == SDL_Init(SDL_INIT_VIDEO))
    {
    	printf("Nao consegui inicializar. SDL error=%s\n", SDL_GetError());
  		return ERRO;
    }

	atexit(SDL_Quit);
	
	//criar uma janela 640x480x16bits
    screen = SDL_SetVideoMode(SCREEN_W, SCREEN_H, 16, SDL_HWSURFACE | SDL_DOUBLEBUF);
   	if (!screen)
	{
		printf("Nao consegui iniciar modo de video. SDL error=%s\n", SDL_GetError());
  		return ERRO;
	}	
 
	cor_fundo = SDL_MapRGB(screen->format, 5, 50, 100);


	/* tratando da imagem em bmp */
	bmp.imagem = SDL_LoadBMP("pic3.bmp"); //quadro rosa, transparencia sera setada
	if (!bmp.imagem)	
	{
		printf("Nao consegui carregar imagem pic3.bmp\n");  		exit(ERRO);
	}	
	
	//setar a transpar�ncia do arquivo carregado do BMP
	if (-1 == SDL_SetColorKey(bmp.imagem, SDL_SRCCOLORKEY | SDL_RLEACCEL, SDL_MapRGB(bmp.imagem->format, 255, 0, 255)))
	{
		printf("Nao consegui color key. SDL error=%s\n", SDL_GetError());
	}

	// coloca imagem nas posicoes iniciais
	bmp.posicao.x = -250; //destino do blit da superficie BMP (w, h sao ignorados)
	bmp.posicao.y = 190;
	bmp.posicao.w = bmp.posicao.h = 0;
	
	// inicia velocidades das imagens
	bmp.incx = 1; bmp.incy = 0;
	
	
	/* trata imagem png */
	png.imagem = IMG_Load("pic4.png"); //quadro cinza, transparencia guardada no arquivo
	if (!png.imagem)
	{
		printf("Nao consegui carregar imagem pic4.bmp\n");
  		return ERRO;
	}	

	png.posicao.x = 250;
	png.posicao.y = 190; //destino do blit da superficie BMP (w, h sao ignorados)
	png.posicao.w = png.posicao.h = 0;

	png.incx = 1; png.incy = 0;
	
	
	
	/* tratar da imagem com alpha */
	//computador, transparencia guardada no arquivo + geral sera setada
	alpha.imagem = IMG_Load("pic5.gif"); 
	if (!alpha.imagem)
	{
		printf("Nao consegui carregar imagem pic5.bmp\n");
  		return ERRO;
	}	

	
	alpha.posicao.x = 270;
	alpha.posicao.y = 500; //destino do blit da superficie com alpha (w, h sao ignorados)
	alpha.posicao.w = alpha.posicao.h = 0;
	
	alpha.incx = 0; alpha.incy = -1;


    while(!quit) //rodar enquanto nao for para encerrar :)
    {
		while(SDL_PollEvent(&event)) //checar eventos
		{
			switch(event.type)
			{
				case SDL_QUIT: quit = 1; break;//sair do loop principal
				case SDL_KEYDOWN:
					if (event.key.keysym.sym == SDLK_ESCAPE)
					{ 
						quit = 1; break;
					}
					break;
				default: break;
			}
			
			
		}
		
		/* pequena animacao */
		update_positions(&bmp);
		update_positions(&png);
		update_positions(&alpha);

		lixo = alpha.posicao;
		lixo2 = bmp.posicao;

		/* limpar a tela */
		if (-1 == SDL_FillRect(screen, NULL, cor_fundo))
    	{
    		printf("Nao consegui encher o retangulo. SDL error=%s\n", SDL_GetError());
  			return ERRO;
    	}

		/* copiar as imagens */
		if (-1 == SDL_BlitSurface(bmp.imagem, NULL, screen, &lixo2))
		{
			printf("Sem blit. SDL error=%s\n", SDL_GetError());
  			return ERRO;
		}
		
		if (-1 == SDL_BlitSurface(png.imagem, NULL, screen, &png.posicao))
		{
			printf("Sem blit. SDL error=%s\n", SDL_GetError());
  			return ERRO;
		}
		
		if (-1 == SDL_BlitSurface(alpha.imagem, NULL, screen, &lixo))
		{
			printf("Sem blit. SDL error=%s\n", SDL_GetError());
  			return ERRO;
		}

		/* atualizar a tela */
		if (-1 == SDL_Flip(screen))
		{
			printf("Nao consegui fazer flip. SDL error=%s\n", SDL_GetError());
			return ERRO;
		}

	}

    SDL_Quit(); //encerrar a SDL

    return 0;
}