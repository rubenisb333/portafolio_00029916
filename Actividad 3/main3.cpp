//Primera parte
a[0][0] = 100
a[2][1] = 141
a[5][1] = 201
a[1][10] = 130
a[2][10] = 150
a[5][3] = 203
a[9][19] = 299

//Segunda parte  
matrix[0][0] = *(*(matrix))

matrix[ i ][ j ] /= *((*(matrix)) + (i * COLS + j))

matrix[ i ][ j ] = *(*(matrix + i) + j)

matrix[ i ][ j ] = *(matrix[i] + j)

matrix[ i ][ j ] = (*(matrix + i))[j]
