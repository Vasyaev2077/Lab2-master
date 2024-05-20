#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#define N 5

int main() {

    float m[N][N];
    int i,j, min;
    for (i=0;j<N;j++)
        for (j=0;j<N;j++) m[i][j]=rand()/10;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
            std::cout<<std::setw(8)<<std::setprecision(5)<<m[i][j];
        std::cout << std::endl;
    }

    getch();
    return 0;
}

//Минимум матрицы
int minMatrix (float m[N][N]){
    int i,j,min;
    min = m[0][0];
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            if(m[i][j] < min)  {
                min = m[i][j];
            }
        }
    }
    return min;
}
//Максимум матрицы
int maxMatrix (float m[N][N]){
    int i,j,max;
    max = m[0][0];
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            if(m[i][j] > max)  {
                max = m[i][j];
            }
        }
    }
    return max;
}

//Максимум нижнетреугольной матрицы
int maxDownMatrix (float m[N][N]){
    int i,j,max;
    max = m[0][0];
    for(i = 0; i < N; i++) {
        for(j = 0; j < i+1; j++) {
            if(m[i][j] > max)  {
                max = m[i][j];
            }
        }
    }
    return max;
}
//Минимум нижнетреугольной матрицы
int minDownMatrix (float m[N][N]){
    int i,j,min;
    min = m[0][0];
    for(i = 0; i < N; i++) {
        for(j = 0; j < i+1; j++) {
            if(m[i][j] < min)  {
                min = m[i][j];
            }
        }
    }
    return min;
}
//Минимум верхнетреугольной матрицы
int minUpMatrix (float m[N][N]){
    int i,j,min;
    min = m[0][0];
    for(i = N-1; i >= 0; i--) {
        for(j = 0; j < i+1; j++) {
            if(m[i][j] < min)  {
                min = m[i][j];
            }
        }
    }
    return min;
}
//Минимум верхнетреугольной матрицы
int maxUpMatrix (float m[N][N]){
    int i,j,max;
    max = m[0][0];
    for(i = N-1; i >= 0; i--) {
        for(j = 0; j < i+1; j++) {
            if(m[i][j] > max)  {
                max = m[i][j];
            }
        }
    }
    return max;
}
//Минимум главной диагонали матрицы
int minMainDiagMatrix (float m[N][N]){
    int i,min;
    min = m[0][0];
    for(i = 0; i < N; i++) {
        if(m[i][i] < min)  {
            min = m[i][i];
        }
    }
    return min;
}
//Максимум главной диагонали матрицы
int maxMainDiagMatrix (float m[N][N]){
    int i,max;
    max = m[0][0];
    for(i = 0; i < N; i++) {
        if(m[i][i] < max)  {
            max = m[i][i];
        }
    }
    return max;
}
//Максимум второстепенной диагонали матрицы
int maxDiagMatrix (float m[N][N]){
    int i, max;
    max = m[0][0];
    for(i = N-1; i >= 0; i--) {
        if(m[i][i] > max) {
            max = m[i][i];
        }
    }
    return max;
}
//Минимум второстепенной диагонали матрицы
int minDiagMatrix (float m[N][N]){
    int i, min;
    min = m[0][0];
    for(i = N-1; i >= 0; i--) {
        if(m[i][i] < min) {
            min = m[i][i];
        }
    }
    return min;
}
//Среднеарифметическое значение элементов матрицы
int averageMatrix (float m[N][N]){
    int i,j,sum;
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            sum += m[i][j];
        }
    }
    return sum/(N*N);
}
//Среднеарифметическое значение нижнетреугольной матрицы
int averageDownMatrix (float m[N][N]){
    int i,j,sum;
    for(i = 0; i < N; i++) {
        for(j = 0; j < i+1; j++) {
            sum += m[i][j];
        }
    }
    return sum;
}
//Среднеарифметическое значение верхнетреугольной матрицы
int averageUpMatrix (float m[N][N]){
    int i,j,sum;
    for(i = N-1; i >= 0; i--) {
        for(j = 0; j < i+1; j++) {
            sum += m[i][j];
        }
    }
    return sum;
}
//Суммы строк матрицы
float * sumStringMatrix (float m[N][N]){
    int i,j;
    float sum[5];
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            sum[i] += m[i][j];
        }
    }
    return sum;
}
//Суммы столбцов матрицы
float * sumColumnMatrix (float m[N][N]){
    int i, j;
    float sum[5];
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            sum[i] += m[j][i];
        }
    }
    return sum;
}
//Минимальные значения строк матрицы
float * minStringMatrix (float m[N][N]){
    int i,j;
    float min[5];
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            if(m[i][j] < min[i])  {
                min[i] = m[i][j];
            }
        }
    }
    return min;
}
//Максимальные значения строк матрицы
float * maxStringMatrix (float m[N][N]){
    int i,j;
    float max[5];
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            if(m[i][j] < max[i])  {
                max[i] = m[i][j];
            }
        }
    }
    return max;
}
//Минимальные значения столбцов матрицы
float * minColumnMatrix (float m[N][N]){
    int i,j;
    float min[5];
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            if(m[j][i] < min[i])  {
                min[i] = m[j][i];
            }
        }
    }
    return min;
}
//Максимальные значения столбцов матрицы
float * maxColumnMatrix (float m[N][N]){
    int i,j;
    float max[5];
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            if(m[j][i] < max[i])  {
                max[i] = m[j][i];
            }
        }
    }
    return max;
}
//Среднеарифметическое значение строк матрицы
float * averageStringMatrix (float m[N][N]){
    int i,j;
    float sum[5];
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            sum[i] += m[i][j];
        }
        sum[i] = sum[i]/(N*N);
    }
    return sum;
}
//Среднеарифметическое значение столбцов матрицы
float * averageColumnMatrix (float m[N][N]){
    int i,j;
    float sum[5];
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            sum[i] += m[j][i];
        }
        sum[i] = sum[i]/(N*N);
    }
    return sum;
}
//Сумма нижнетреугольной части матрицы
int sumDownMatrix (float m[N][N]){
    int i,j,sum;
    for(i = 0; i < N; i++) {
        for(j = 0; j < i+1; j++) {
                sum += m[i][j];
        }
    }
    return sum;
}
//Сумма верхнетреугольной части матрицы
int sumUpMatrix (float m[N][N]){
    int i,j,sum;
    for(i = N-1; i >= 0; i--) {
        for(j = 0; j < i+1; j++) {
            sum += m[i][j];
        }
    }
    return sum;
}
//Элемент, наиболее близкий по значению к среднеарифметическому
int averageNearMatrix (float m[N][N]){
    int i, j, mid, temp, d1, d2;
    mid = averageMatrix(m);
    for(i = 0;i<N;++i){
        for(j = 0;j<N;++j){
            int val = std::abs(mid-(int)m[i][j]);
            if(i==0&&j==0)temp = val;
            if(temp>val)
            {
                temp = val;
                d1 =i;
                d2 =j;
            }
        }
    }
    return m[d1][d2];
}