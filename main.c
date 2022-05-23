 
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
 
 
 
int change(char y){
    int n=0;
    if(y == 'A'|| y == 'a'){n=1;}
    if(y == 'B'|| y == 'b'){n=2;}
    if(y == 'C'|| y == 'c'){n=3;}    
    if(y == 'D'|| y == 'd'){n=4;}
    if(y == 'E'|| y == 'e'){n=5;}
    if(y == 'F'|| y == 'f'){n=6;}
    if(y == 'G'|| y == 'g'){n=7;}
    if(y == 'H'|| y == 'h'){n=8;}
    if(y == 'I'|| y == 'i'){n=9;}
    if(y == 'J'|| y == 'j'){n=10;}
    if(y == 'K'|| y == 'k'){n=11;}
    if(y == 'L'|| y == 'l'){n=12;}
    if(y == 'M'|| y == 'm'){n=13;}
    if(y == 'N'|| y == 'n'){n=14;}
    if(y == 'O'|| y == 'o'){n=15;}
    if(y == 'P'|| y == 'p'){n=16;}
    if(y == 'Q'|| y == 'q'){n=17;}
    if(y == 'R'|| y == 'r'){n=18;}
    if(y == 'S'|| y == 's'){n=19;}
    if(y == 'T'|| y == 't'){n=20;}
    if(y == 'U'|| y == 'u'){n=21;}
    if(y == 'V'|| y == 'v'){n=22;}
    if(y == 'W'|| y == 'w'){n=23;}
    if(y == 'X'|| y == 'x'){n=24;}
    if(y == 'Y'|| y == 'y'){n=25;}
    if(y == 'Z'|| y =='z'){n=26;}
    return n;
}
int trocar(int y){
    char n;
    if(y==0){n='X';}
    if(y==1){n='A';}
    if(y==2){n='B';}    
    if(y==3){n='C';}
    if(y==4){n='D';}
    if(y==5){n='E';}
    if(y==6){n='F';}
    if(y==7){n='G';}
    if(y==8){n='H';}
    if(y==9){n='I';}
    if(y==10){n='J';}
    if(y==11){n='K';}
    if(y==12){n='L';}
    if(y==13){n='M';}
    if(y==14){n='N';}
    if(y==15){n='O';}
    if(y==16){n='P';}
    if(y==17){n='Q';}
    if(y==18){n='R';}
    if(y==19){n='S';}
    if(y==20){n='T';}
    if(y==21){n='U';}
    if(y==22){n='V';}
    if(y==23){n='W';}
    if(y==24){n='X';}
    if(y==25){n='Y';}
    if(y==26){n='Z';}
 
    return n;
   
}
int main() {
    int dificuldade=0;
    int e=0;
    srand(time(NULL));
    int bombas, linha,coluna,bombasmax;
    printf("============================================================================");
    printf("\n                     BEM VINDO AO CAMPO MINADO");
    printf("\n                    Pressione ENTER para comecar\n");
    printf("============================================================================");
    getchar();
   
 
 
    printf("============================================================================\n");
    printf("                      Selecione a dificuldade");
    printf("\n1-Facil\n2-Medio\n3-Dificil\n4-Customizado");
    printf("\n============================================================================\n");
    scanf("%d",&dificuldade);
    while(e==0){
if(dificuldade==1){
    linha=7;
    coluna=7;
    bombasmax=9;
    e=1;
}else if(dificuldade==2){
    linha=12;
    coluna=12;
    bombasmax=30;
    e=1;
}else if(dificuldade==3){
    linha=12;
    coluna=21;
    bombasmax=55;
    e=1;
}else if(dificuldade==4){
    printf("Digite o numero de linhas:");
    scanf("%d",&linha);
    printf("Digite o numero de colunas:");
    scanf("%d",&coluna);
    printf("Digite o numero de bombas:");
    scanf("%d", &bombasmax);
    linha++;
    coluna++;
    e++;
   
}else{printf("Digite um numero coreto");}}
   
    char vis[linha][coluna]; //matriz visivel
    int inv[linha][coluna]; //matriz invivel
 
    for(int i =0; i<linha;i++){
        for(int j =0; j<coluna;j++){
            inv[i][j]=0;
        }
    }
    int linbomba;
    int colbomba;
    for(int i =0;i<bombasmax;i++){ //selecionar bombas
        linbomba= rand() % (linha-1) +1;
        colbomba=rand() % (coluna-1) +1;
        inv[linbomba][colbomba]=9;
    }
   
    for(int i =1; i<linha;i++){
        for(int j =1; j<coluna;j++){
            if(inv[i-1][j-1]==9){
                if(inv[i][j]!=9){inv[i][j]++;}}
            if(inv[i-1][j]==9){
                if(inv[i][j]!=9){inv[i][j]++;}}
            if(inv[i-1][j+1]==9){
                if(inv[i][j]!=9){inv[i][j]++;}}
            if(inv[i][j-1]==9){
                if(inv[i][j]!=9){inv[i][j]++;}}
            if(inv[i][j+1]==9){
                if(inv[i][j]!=9){inv[i][j]++;}}
            if(inv[i+1][j-1]==9){
                if(inv[i][j]!=9){inv[i][j]++;}}
            if(inv[i+1][j]==9){
                if(inv[i][j]!=9){inv[i][j]++;}}
            if(inv[i+1][j+1]==9){
                if(inv[i][j]!=9){inv[i][j]++;}}
        }
    }
    char coltabela[2];
    for(int i =0; i<linha;i++){
        for(int j =0; j<coluna;j++){
            printf("%d ", inv[i][j]);
            if(j==0){
                vis[i][j]=trocar(i);
            }else{
            vis[i][j]='-';}
 
        }printf("\n");
    }
    int count;
    char lin; //linha digitada pelo usuario
    int lintrans; // linha transformada
    int col; // coluna digitada pelo usuario
    printf("Matriz visivel\n");
    do{
 
    for(int i =0; i<linha;i++){
        for(int j =0; j<coluna;j++){
            sprintf(coltabela,"%d",j);
            if(i==0&&j>0&&j<10){
                printf("%s  ", coltabela);
            }else if(i==0&&j>=10){
                printf("%s ",coltabela);
            }else{
                printf("%c  ",vis[i][j]);}
        }printf("\n");
    }
    printf("Digite uma linha e coluna no formato A1\n");
    scanf("%c%d",&lin, &col);
    lintrans= change(lin);
    if(inv[lintrans][col]==9){
        vis[lintrans][col]='*';
    for(int i =0; i<linha;i++){
        for(int j =0; j<coluna;j++){
            sprintf(coltabela,"%d",j);
            if(i==0&&j>0&&j<10){
                printf("%s  ", coltabela);
            }else if(i==0&&j>=10){
                printf("%s ",coltabela);
            }else{
                printf("%c  ",vis[i][j]);}
        }printf("\n");
    }
        printf("BOOOOOOMM!!! Você perdeu :(");
        count=bombasmax;
       
    }
    }while(count<bombasmax);
    return 0;
}
 
 
 
 
 


╋╋╋╋╋╋╋╋╋╋╋╋╋╋╋╋┏┓╋╋╋╋╋╋┏┓
┏━┳━┓┏━━┳━┳━┓┏━━╋╋━┳┳━┓┏┛┣━┓
┃━┫╋┗┫┃┃┃╋┃╋┃┃┃┃┃┃┃┃┃╋┗┫╋┃╋┃
┗━┻━━┻┻┻┫┏┻━┛┗┻┻┻┻┻━┻━━┻━┻━┛
╋╋╋╋╋╋╋╋┗┛


