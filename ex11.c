/* *********************************************************************** *
 *    ex11.c, V0.1                                                          *
 *    ATÉ A ÚLTIMA RISADA - nossa história para o adventure text            *
 *                                                                          *
 *    Copyright (C) 2025 by * Leticia Da Silva Santos                       *
 *                          *                                               *
 *                          *                                               *
 *                                                                          *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *  To contact the author, please write to:                                 *
 *  Name: Leticia Da Silva Santos <lss4@poli.br>                            *
 *  Webpage: http://beco.poli.br/~username                                  *
 *  Phone: 81993048763                                                      *
 * ************************************************************************ *
 *
 */

#include <stdio.h>

int main(void)
{

 int escolhas;

// introdução da trama
printf("> ATÉ A ULTIMA RISADA\n");
printf(" Senhoras e senhores...\n");
printf(" Bem-vindos à Tenda do Paraiso, onde a brincadeira nunca termina e a sua risada é nossa moeda.\n");
printf(" Mas lembre-se: o paraíso nunca é o que parece\n");
printf(" E se o silêncio dominar\n");
printf(" siga o som do tambor\n");
printf(" ele sempre te guiará.\n");
getchar(); //espera o player dar enter

// primeira fase

printf("\n E foi assim que a noite comecou\n");
printf(" crianças sorrindo, o cheiro da pipoca se misturando com o de algodão doce.\n");
printf(" pelo menos era oque eu esperava...\n");
printf(" Mas tinha algo falso alí.\n");
printf(" as risadas pareciam falsas, as luzes pareciam piscar...\n");
printf(" até que ali, perto do palco, um cartaz dançava com a brisa\n");
printf(" - o show só acaba quando a última risada cessar -\n");
printf(" \n Você olha ao redor e vê no chão uma máscara de palhaço.\n");
printf(" ela parecia estar te chamando através de sussuros por você\n");
getchar();

// primeira escolha

printf("\n O que você vai fazer?\n");
printf("\n Digite 1 : pegar o cartaz\n");
printf(" Digite 2 : pegar a máscara de palhaço\n");
printf("\n> ");
scanf("%i", &escolhas);

if (escolhas == 1)
  {
      printf("\n Você pega o cartaz e sente um calafrio.\n As palavras começam a se mover, e o ar fica pesado.\n");
      printf(" O silêncio aumenta, e as risadas começam a morrer.\n O vazio te consome.\n");
      printf(" Você tenta gritar, mas nada sai de sua voz, é como gritar no escuro.\n Você falhou.\n");
      printf("\n [ERRO: o cartaz te prendeu no silêncio, você morreu.]");
      return 1;
  }
else if (escolhas == 2)
  {
    printf("\n");
  }
else
  {
    printf("\n [ERRO: sua escolha não foi válida. tente novamente] \n");
    return 1;
  }


// segunda fase

printf(" Você pega a máscara e coloca ela em seu rosto, um arrepio agonizante atravessa seu corpo\n");
printf(" A máscara está grudada, viva em seu rosto.\n Você não consegue tirar.\n As risadas ao redor se tornam ensurdecedoras.\n");
printf(" Um sussuro paira no ar dizendo \n- você nunca vai sair daqui\n");
printf("\n BUM... BUM ... BUM...\n");
printf(" O som do tambor fica mais forte.\n");
getchar();

printf(" O espetáculo começou...\n e você, é a atração principal\n");
printf("\n *A última risada ainda não cessou. Encontre a saída antes que a cortina se feche* \n");
getchar();

// segunda escolha

printf(" \n O que você vai fazer?\n");
printf("\n Digite 1: seguir o som do tambor \n");
printf(" Digite 2: procurar uma saída\n");
printf("\n >");
scanf("%i", &escolhas);

if (escolhas == 1)
  {
     printf("\n BUM.. BUM..\n O som fica cada vez mais alto\n");
     printf(" a sala parece ficar menor a cada passo dado, a cada respiração...\n");
     printf(" as risadas se tornam ecos em sua mente\n");
     printf(" e então, a mascara parece te consumir\n");
     getchar();

     printf("\n...\n Você acorda em sua cama com a respiração acelerada\n");
     printf("\n [Parabéns! foi tudo um sonho...]\n ");
     getchar();

     printf("\n Ou apenas o começo do show...\n");

     return 0;
  }
else if (escolhas == 2)
  {
    printf("\n Você corre em busca de uma saída, mas é tarde de mais\n");
    printf(" O som do tambor cessa...");
    printf(" As risadas se tornam altas, arranham seus sentidos\n");
    printf(" elas parecem te caçar...\n e te acham\n");
    getchar();

    printf("\n o circo te engoliu, a máscara agora é parte de você.\n");
    printf("\n GAME OVER \n");

    return 0;
  }
else
  {
    printf("\n [ERRO: sua escolha não foi válida. tente novamente] \n");
  }

return 0;

 }

