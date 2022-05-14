typedef struct bloco
{
    int bloco;
    struct bloco *anterior;
    struct bloco *proximo;
} BLOCO;

typedef struct lde
{
    BLOCO *primeiro;
    BLOCO *ultimo;
    int quantidade_b;
} LDE;

LDE *criaListaLDE();
BLOCO *criaBloco();

void insereNoInicio(LDE *lde, BLOCO *b);
void insereNoFim(LDE *lde, BLOCO *b);
int insereNaPos(LDE *lde, BLOCO *b, int posicao);

void mostraListaED(LDE *lde);
void mostraListaDE(LDE *lde);

BLOCO *removeNoInicio(LDE *lde);
BLOCO *removeNoFim(LDE *lde);
BLOCO *removeNaPosicao(LDE *lde, int posicao);

void movimento(LDE *lde);
int vitoria(LDE *lde);