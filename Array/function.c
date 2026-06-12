void scan(int a, int b, int p[][100]) {
    printf("Enter elements in matrix: \n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &p[i][j]);
        }
    }
}

void print(int a, int b, int p[][100]) {
    printf("The matrix is: \n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
}
void scan1() {
    int a,b,p[100][100];
    printf("Enter row and column : ");
    scanf("%d%d",&a,&b);
    printf("Enter elements in matrix: \n");

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &p[i][j]);
        }
    }
}