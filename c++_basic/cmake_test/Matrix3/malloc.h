type **Matrix ;//row为行,col为列
    Matrix=(type **) malloc(row*sizeof(type *)) ;
    for(int i=0; i<row; i++)
        Matrix[i] = (type *)malloc(col * sizeof(type ));

