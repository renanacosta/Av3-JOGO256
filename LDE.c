#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LDE.h"

LDE* criaListaLDE(){
    LDE *nova = (LDE *)malloc(sizeof(LDE));
    nova->primeiro = NULL;
    nova->ultimo = NULL;
    nova->quantidade_b = 0;
    return nova;
}

BLOCO *criaBloco()
{
    BLOCO *novoBloco = (BLOCO *)malloc(sizeof(BLOCO));
    novoBloco->bloco = 2;
    return novoBloco;
}

void insereNoInicio(LDE *l, BLOCO *bl)
{
    bl->anterior = NULL;
    if(l->primeiro == NULL){
        bl->proximo = NULL;
        l->ultimo = bl;
    }else{
        bl->proximo = l->primeiro;
        l->primeiro->anterior = bl;
    }
    l->primeiro = bl;
    l->quantidade_b++;
}

void insereNoFim(LDE *l, BLOCO *bl)
{
    BLOCO *aux = l->primeiro;
    if(l->primeiro == NULL)
        insereNoInicio(l, bl);
    else{       
        while(aux->proximo != NULL){
            aux = aux->proximo;
        }
        aux->proximo = bl;
        bl->anterior = aux;
        bl->proximo = NULL;
        l->ultimo = bl;
        l->quantidade_b++;
    }
}

int insereNaPos(LDE *l, BLOCO *bloco, int posicao)
{
    BLOCO *aux = l->primeiro;
    if(l->primeiro ==  NULL){
        insereNoInicio(l, bloco);
    }else{
        if(posicao >= l->quantidade_b){
            insereNoFim(l, bloco);
        }else{
            for(int i = 2; i < posicao - 1; i++){
                aux = aux->proximo;
            }
            bloco->anterior = aux;
            bloco->proximo = aux->proximo;
            aux->proximo = bloco;
            bloco->proximo->anterior = bloco;
            l->quantidade_b++;
        }
        
    }
    return posicao;
}

BLOCO *removeNoInicio(LDE *l)
{
    BLOCO *removido = NULL;
    if(l->primeiro == NULL){
        printf("/n Lista vazia /n");
    }
    if(l->primeiro != NULL){
        removido = l->primeiro;
        l->primeiro = l->primeiro->proximo;
        removido->anterior = removido->proximo = NULL;
        l->quantidade_b--;
        if(l->ultimo == removido){
            l->ultimo = NULL;
        }
    }
    return removido;
}

BLOCO *removeNoFim(LDE *l)
{
    BLOCO *removido = NULL, *aux;
    aux = l->primeiro;
    if(aux == NULL){
        printf("/n Lista vazia /n");
    }else{
        if(aux->proximo != NULL){
            removido = removeNoInicio(l);
        }else{
            while(aux->proximo->proximo != NULL){
                aux = aux->proximo;
            }
            removido = aux->proximo;
            aux->proximo = NULL;
            l->ultimo = aux;
            removido->anterior = NULL;
            l->quantidade_b--;
        }
    }
    return removido;
}

BLOCO *removeNaPosicao(LDE *l, int posicao)
{
    BLOCO *aux = l->primeiro;
    if(posicao == 1){
        aux = removeNoInicio(l);
    }else{
        if(posicao >= l->quantidade_b){
            aux = removeNoFim(l);
        }else{
            for (int i = 1; i < posicao; i++){
                aux = aux->proximo;
            }
            aux->anterior->proximo = aux->proximo;
            aux->proximo->anterior = aux->anterior;
            aux->proximo = NULL;
            aux->anterior = NULL;
            l->quantidade_b--;
        }
    }
    return aux;
}

void mostraListaED(LDE *l){
    BLOCO *aux = l->primeiro;
    printf("\n |");
    while(aux != NULL){
        mostraDados(*aux);
        aux = aux->proximo;
    }
    printf("  \n");

}

void mostraListaDE(LDE *l){
    int posicao = l->quantidade_b;
    BLOCO *aux = l->ultimo;
    printf("\n |");
    while(aux != NULL){
        mostraDados(*aux);
        aux = aux->anterior;
    }
    printf("  \n");

}

void mostraDados(BLOCO bl)
{
    printf("%d|", bl.bloco);
}

void movimento(LDE *l){
    BLOCO *bloco = criaBloco();
    BLOCO *aux = NULL;
    BLOCO *novoBloco = NULL;
    novoBloco = l->ultimo;
    int quantidade_blocos = l->quantidade_b;
    
    if(quantidade_blocos > 1){
        for (int i = 1; i < quantidade_blocos; i++){
            if (novoBloco->bloco == novoBloco->anterior->bloco)
            {
                novoBloco->bloco = novoBloco->bloco + novoBloco->anterior->bloco;
                aux = removeNaPosicao(l, quantidade_blocos - i);
                quantidade_blocos--;
            }
            novoBloco = novoBloco->anterior;
        }
    }
    insereNaPos(l, bloco, (1 + rand() % (quantidade_blocos + 1)));
    mostraListaED(l);
}

int vitoria(LDE *l){
    BLOCO *bloco;
    bloco = l->primeiro;
    for (int i = 1; i < l->quantidade_b; i++){
        if (bloco->bloco == 256)
        {
            printf("\n Parabéns, você venceu!!! \n");
            return 0;
        }
        bloco = bloco->proximo;
    }
    return 1;
}

void apagaLDE(LDE *l){

}