![Badge](https://img.shields.io/badge/Avaliação_3-Lista_Duplamente_Encadeada-%237159c1?style=for-the-badge&logo=ghost)
# <p align="center">**LISTA DUPLAMENTE ENCADEADA (LDE)**</p>

<p align="center">
<img src="https://user-images.githubusercontent.com/36648528/168410786-c0f33ec4-b3ff-4eb0-8174-da511738b2b9.png">
</p>

## 📖 Sobre o projeto
#  
O projeto foi desenvolvido para avaliação 3 da disciplina de Estrutura de Dados, ministrado pelo professor **Luciano Vargas Gonçalves** do curso de Tecnologia em Análise e Desenvolvimento de Sistemas do IFRS, campus Rio Grande.

Tendo como objetivo a implementação do jogo 256, baseado no famoso jogo 2048.

## 📺 Preview

<table border="0" align="center">
 <tr>
   <td align="center"> <p align="center">
<img src="https://user-images.githubusercontent.com/36648528/168410215-f4db8e60-2ad1-4d92-9757-7be7f1fe2b78.png">
</p> </td>
 </tr>
 </table>



<p align="center">
<img src="https://user-images.githubusercontent.com/36648528/168410841-2db42664-fafc-4328-a6db-be7a946a6c5f.png">
</p>

<p align="center">
<img src="https://user-images.githubusercontent.com/36648528/168410231-18011624-c2d4-4956-ae33-c93fb850a121.png">
</p>

<br><br>
## 📖 Instruções
---
<br>
1) Com base nos conceitos de Lista Simplesmente Encadeada(LSE), implemente as funções:

- A) Implemente um jogo resumido do jogo 2048, chamaremos de “JOGO256”. O jogo opera de modo similar, utilizando apenas um linha de blocos, não trabalharemos com colunas. A linha de blocos será implementada utilizando a estrutura de Lista duplamente encadeada (LDE);

- B) A cada rodada um novo bloco com valor igual 2 (dois) é inserido em uma posição aleatória da lista. Validar a posição sorteada, caso seja maior que o tamanho da lista inserir no FIM;

- C) Adiciona um elemento em uma dada posição “pos” (lista *l, elemento *e, int pos). Retornar o código (1 para sucesso e 0 para Falha caso posição inválida);

- I) Mover para Esquerda ( <= ), junta dois blocos com o mesmo valor, começando pelo bloco mais a esquerda e seu vizinho, o processo deve ser recursivo.
- I.1) Exemplo1:    | 2 | 2 | 2 | <= | 4 | 2 |
- I.2) Exemplo2:    | 2 | 2 | 4 | <= | 4 | 4 | <= | 8 |
- I.3) Exemplo3:    | 2 | 2 | 4 | 4 | <= | 4 | 8 |

- II) Mover para Direita ( => ), junta dois blocos com o mesmo valor, começando pelo bloco mais a direita e seu vizinho imediato, o processo deve ser recursivo.
- II.1) Exemplo1:   | 2 | 2 | 2 | => | 2 | 4 |
- II.2) Exemplo2:   | 2 | 2 | 4 | => | 4 | 4 | => | 8 |
- II.3) Exemplo3:   | 2 | 2 | 4 | 4 | => | 4 | 8 |
- II.4) Exemplo4:   | 2 | 2 | 2 | 4 | => | 2 | 4 | 4 | => | 2 | 8 |

- D) Em algumas jogadas poderá não ser possível juntar os blocos, mas a inserção será obrigatória;

- E) O jogo termina quando um bloco alcançar o valor 256, nesse momento é informado o número total de jogadas realizadas (mover para Direita ou Esquerda).


<br><br>

---
---
<br>

# 💾 Clone do repositório
<img src="https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white">

git clone https://github.com/renanacosta/Av3-JOGO256


**Desenvolvido por [Renan Gomes Acosta](https://github.com/renanacosta).**


