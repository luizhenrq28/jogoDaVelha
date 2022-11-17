#include <stdio.h>
int main ()
{
    char a[3][3] = { {' ',' ',' '},{' ',' ',' '},{' ',' ',' '} };

    int i, j;
    int horizontal;
    int vertical;
    char simbolo;
    int cont = 0;

    for (i = 0; i < 9; i++)
    {
        printf ("digite a posicao horizontal: ");
        scanf ("%d", &horizontal);

        printf ("digite a posicao vertical: ");
        scanf ("%d", &vertical);
        printf("\n");

        if(a[horizontal][vertical] != ' '){
            printf("indisponivel! \n");
            continue;
        }

        if(cont == 0){
            simbolo = 'x';
            cont++;
        }else if(cont == 1){
            simbolo = 'o';
            cont--;
        }

        a[horizontal][vertical] = simbolo;

        for( int t = 0; t<50; t++){
            printf("\n");
        }

        for(j=0; j<3; j++)
        {

            for(int y=0; y<3; y++)
            {

                if(y==0)
                {
                    printf("  %c |", a[j][y]);
                }
                else if(y==2)
                {
                    printf("| %c ", a[j][y]);
                }
                else
                {
                    printf(" %c ", a[j][y]);
                }

            }
            printf("\n");
        }
        printf("\n");

        if((a[0][0]==a[0][1] && a[0][2]==a[0][0]) &&  (a[0][0] != ' ' || a[0][1] != ' ' || a[0][2] != ' '))
        {
            printf("vc venceu na horizontal 1");
            break;
        }
        else if((a[1][0]==a[1][1] && a[1][2]==a[1][0]) && (a[1][0] != ' ' || a[1][1] != ' ' || a[1][2] != ' '))
        {
            printf("vc venceu na horizontal 2");
            break;
        }
        else if((a[2][0]==a[2][1] && a[2][2]==a[2][0]) && (a[2][0] != ' ' || a[2][1] != ' ' || a[2][2] != ' '))
        {
            printf("vc venceu na horizontal 3");
            break;
        }
        else{
            if((a[0][0]==a[1][0] && a[2][0]==a[0][0]) &&  (a[0][0] != ' ' || a[1][0] != ' ' || a[2][0] != ' '))
            {
                printf("vc venceu na vertical 1!!!");
                break;
            }
            else if((a[0][1]==a[1][1] && a[2][1]==a[0][1]) &&  (a[0][1] != ' ' || a[1][1] != ' ' || a[2][1] != ' '))
            {
                printf("vc venceu na vertical 2!!!");
                break;
            }
            else if((a[0][2]==a[1][2] && a[2][2]==a[0][2]) &&  (a[0][2] != ' ' || a[1][2] != ' ' || a[2][2] != ' '))
            {
                printf("vc venceu na vertical 3!!!");
                break;
            }
            else if((a[0][0]==a[1][1] && a[2][2]==a[0][0]) &&  (a[0][0] != ' ' || a[1][1] != ' ' || a[2][2] != ' '))
            {
                printf("vc venceu na diagonal principal");
                break;
            }
            else if((a[0][2]==a[1][1] && a[2][0]==a[0][2]) &&  (a[0][2] != ' ' || a[1][1] != ' ' || a[2][0] != ' '))
            {
                printf("vc venceu na diagonal secundaria");
                break;
            }
            else if(a[0][0] != ' ' && a[0][1] != ' ' &&  a[0][2] != ' ' && a[1][0] != ' ' && a[1][1] != ' ' && a[1][2] != ' ' && a[2][0] != ' ' && a[2][1] != ' ' && a[2][2] != ' ')
            {
                printf("\n");
                printf("empate!!!");
                printf("\n");
            }
        }
    }
    return 0;
}
