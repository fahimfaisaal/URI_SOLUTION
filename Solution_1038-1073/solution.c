#include <stdio.h>
#include <math.h>
#include <string.h>

double taxes(double salary, int percentage) {
    double tax = (salary * percentage) / 100.0;

    return tax;
}

void main() {

//* Problem 1038 - Snack
    // int product_code, quantity;
    // char str[] = "Total: R$";
    // scanf("%d %d", &product_code, &quantity);

    // if (product_code == 1) {
    //     printf("%s %.2f\n", str, 4.00 * quantity);
    // } else if (product_code == 2) {
    //     printf("%s %.2f\n", str, 4.50 * quantity);
    // } else if (product_code == 3) {
    //     printf("%s %.2f\n", str, 5.00 * quantity);
    // }else if (product_code == 4) {
    //     printf("%s %.2f\n", str, 2.00 * quantity);
    // } else if (product_code == 5) {
    //     printf("%s %.2f\n", str, 1.50 * quantity);
    // }

//* Problem 1040 - Average 3
    // float N1, N2, N3, N4, N5;
    // float Media, Average;
    // scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    // Media = ((N1 * 2.0) + (N2 * 3.0) + (N3 * 4.0) + N4) / 10;

    // printf("Media: %.1f\n", Media);
    // if (Media >= 7.0) {
    //     printf("Aluno aprovado.\n");
    // } else if (5.0 <= Media) {
    //     printf("Aluno em exame.\n");
    //     scanf("%f", &N5);
    //     printf("Nota do exame: %.1f\n", N5);
    //     Average = (N5 + Media) / 2.0;
    //     (Average > 5.0) ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n");
    //     printf("Media final: %.1f\n", Average);
    // } else {
    //     printf("Aluno reprovado.\n");
    // }

//* Problem 1041 - Coordinates of a Point
    // float x , y;
    // scanf("%f %f", &x, &y);

    // if (x == 0.0 && y == 0.0) {
    //     printf("Origem\n");
    // } else if (y == 0) {
    //     printf("Eixo X\n");
    // } else if (x == 0) {
    //     printf("Eixo Y\n");
    // } else if (x > 0.0) {
    //     (y > 0.0) ? printf("Q1\n") : printf("Q4\n");
    // } else {
    //     (y > 0.0) ?  printf("Q2\n") : printf("Q3\n");
    // }

//* Problem 1042 - Simple sort
    // int a, b, c;
    // scanf("%d %d %d", &a, &b, &c);
    // int small = a, medium = b, big = c;

    // if (a >= b && a >= c) {
    //     big = a;

    //     if (b > c) {
    //         small = c;
    //     } else {
    //         medium = c;
    //         small = b;
    //     }
    // } else if (b >= c && b >= a) {
    //     big = b;

    //     if (a > c) {
    //         medium = a;
    //         small = c;
    //     } else {
    //         medium = c;
    //     }
    // } else if (c >= a && c >= b) {
    //     big = c;

    //     if (a > b) {
    //         medium = a;
    //         small = b;
    //     }
    // }

    // printf("%d\n%d\n%d\n\n", small, medium, big);
    // printf("%d\n%d\n%d\n", a, b, c);

//* Problem 1043 - Triangle
    // float a, b, c, area, Perimetro;
    // scanf("%f %f %f", &a, &b, &c);

    // Perimetro = a + b + c;
    // area = ((a + b) * c) / 2;
    // (a < (b + c) && b < (a + c) && c < (a + b)) ?  printf("Perimetro = %.1f\n", Perimetro) : printf("Area = %.1f\n", area);

//* Problem 1044 - Multiples
    // int A, B, resultA, resultB;
    // scanf("%d %d", &A, &B);
    // resultA = A % B == 0;
    // resultB = B % A == 0;

    // if (resultA || resultB) {
    //     printf("Sao Multiplos\n");
    // } else {
    //     printf("Nao sao Multiplos\n");
    // }

//* Problem 1045 - Triangle Types
    // double a, b, c, big;

    // scanf("%lf %lf %lf", &a, &b, &c);    

    // if (a < b) {
    //     big = b;
    //     b = a;
    //     a = big;
    // }
    // if (a < c) {
    //     big = c;
    //     c = a; 
    //     a = big; 
    // }

    // if (a > 0.0 && b > 0.0 && c > 0.0) {
    //     if (a >= (b + c)) {
    //         printf("NAO FORMA TRIANGULO\n");
    //     } else if (pow(a, 2) == (pow(b, 2) + pow(c, 2))) {
    //         printf("TRIANGULO RETANGULO\n");
    //     } else if (pow(a, 2) > (pow(b, 2) + pow(c, 2))) {
    //             printf("TRIANGULO OBTUSANGULO\n");                
    //     } else if (pow(a, 2) < (pow(b, 2) + pow(c, 2))) {
    //             printf("TRIANGULO ACUTANGULO\n");
    //     }

    //     if (a == b && b == c && c == a) {
    //         printf("TRIANGULO EQUILATERO\n");
    //     } else if (a == b || b == c || c == a) printf("TRIANGULO ISOSCELES\n");
    // }

//* Problem 1046 - Game Time
    // int start, end, hours;

    // scanf("%d %d", &start, &end);

    // if ((start >= 0 && start < 24) && (end >= 0 && end < 24)) {

    //     if (start == 0) start = 24;
    //     if (end == 0) end = 24;

    //     if (start < end) {
    //         hours = end - start;
    //     } else {
    //         if (start >= 12)  hours = (end + 24) - start;        
    //     }

    //     printf("O JOGO DUROU %d HORA(S)\n", hours);
    // }

//* Problem 1047 - Game Time with Minutes


//* Problem 1048 - Salary Increase

    // double salary, salary_increase;
    // int percentage;
    // scanf("%lf", &salary);

    // if (salary >= 0 && salary <= 400.00) percentage = 15;
    // if (salary > 400.00 && salary <= 800.00) percentage = 12;
    // if (salary > 800.00 && salary <= 1200.00) percentage = 10;
    // if (salary > 1200.00 && salary <= 2000.00) percentage = 7;
    // if (salary > 2000.00) percentage = 4;


    // salary_increase = (salary * percentage) / 100;

    // printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", salary + salary_increase, salary_increase, percentage);

//* Problem 1049 - Animal

    // char str1[15] = "", str2[15] = "", str3[15] = "";

    // scanf("%s\n%s\n%s", &str1, &str2, &str3);

    //     if (!strcmp(str1, "vertebrado") || !strcmp(str1, "invertebrado")) {
    //         if (!strcmp(str2, "ave")) {
    //             !strcmp(str3, "carnivoro") ? printf("aguia\n") : printf("pomba\n");
    //         } else if (!strcmp(str2, "mamifero")) {
    //             !strcmp(str3, "onivoro") ? printf("homem\n") : printf("vaca\n");
    //         } else if (!strcmp(str2, "inseto")) {
    //             !strcmp(str3, "hematofago") ?  printf("pulga\n") : printf("lagarta\n");
    //         } else if (!strcmp(str2, "anelideo")) {
    //             !strcmp(str3, "hematofago") ? printf("sanguessuga\n") : printf("minhoca\n");
    //         }
    //     }

//* Problem 1050 - DDD
//     int num;
//     scanf("%d", &num);

//    if (num == 61) {
//        printf("Brasilia\n");
//    } else if (num == 71) {
//        printf("Salvador\n");
//    } else if (num == 11) {
//        printf("Sao Paulo\n");
//    } else if (num == 21) {
//        printf("Rio de Janeiro\n");
//    } else if (num == 32) {
//        printf("Juiz de Fora\n");
//    } else if (num == 19) {
//         printf("Campinas\n");
//    } else if (num == 27) {
//        printf("Vitoria\n");
//    } else if (num == 31) {
//      printf("Belo Horizonte\n");
//    } else {
//        printf("DDD nao cadastrado\n");
//    }

//* Problem 1051 - Taxes
    // double salary, cut_salary, tax = 0;
    // scanf("%lf", &salary);

    // salary -= 2000.00;

    // if (salary <= 0) {        
    //     printf("Isento\n");
    // } else {
    //     if (salary > 2500) {
    //         cut_salary = salary - 2500;
    //         tax += taxes(cut_salary, 28);
    //         salary -= cut_salary;
    //     }

    //     if (salary >= 1500 || salary > 1000) {
    //         cut_salary = salary - 1000;
    //         tax += taxes(cut_salary, 18);
    //         salary -= cut_salary;
    //     }

    //     if (salary <= 1000) tax += taxes(salary, 8);
        

    //     printf("R$ %.2lf\n", tax);
    // }

//* Problem 1059 - Even Numbers
    // for (int i = 2; i <= 100; i += 2)  printf("%d\n", i);

//* Problem 1060 - Positives Numbers
    // float numbers[6];
    // int count = 0;

    // for (int i = 0; i < 6; i++) scanf("%f", &numbers[i]);

    // for (int i = 0; i < 6; i++) if (numbers[i] >= 0) count++;

    // printf("%d valores positivos\n", count);
}
