array matrix1[2][2];
array matrix2[2][2];
array matrix3[2][2];

define i;
define j;
define k;

matrix1[0][0] = 1;
matrix1[0][1] = 2;
matrix1[1][0] = 3;
matrix1[1][1] = 4;

matrix2[0][0] = 5;
matrix2[0][1] = 6;
matrix2[1][0] = 7;
matrix2[1][1] = 8;

for(i=0;i<2;i++){
  for(j=0;j<2;j++){
    matrix3[i][j] = 0;
  }
}

for(i=0;i<2;i++){
  for(j=0;j<2;j++){
    for(k=0;k<2;k++){
      matrix3[i][j] = matrix3[i][j] + matrix1[i][k] * matrix2[k][j];
    }
  }
}


