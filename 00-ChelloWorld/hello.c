#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *f;

    f = fopen("output.txt", "w");
    if (f == NULL) {
		fprintf(stdout, "No se pudo abrir el archivo de escritura\n\n");
		exit(1);
	}

    fprintf( f, "Hello, World!\n");

    fclose(f);
    
    system("pause");
    return 0;
}
