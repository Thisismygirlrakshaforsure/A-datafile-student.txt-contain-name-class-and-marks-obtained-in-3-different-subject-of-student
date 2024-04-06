#include 
int main()
{
    char n[10];
    int c, e, ne, m;
    FILE *fptr;
    fptr = fopen("student.txt","r");
    while(fscanf(fptr,"%s %d %d %d %d",n,&c,&e,&ne,&m) != EOF)
    {      
       if (e>=27 && ne>=27 && m>=27)
        {
          printf("%s %d  %d  %d  %d", n, c, e, ne, m);    
        }
    }
    fclose(fptr);
    return 0;
}
