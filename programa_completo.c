#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Função para limpar o buffer do teclado
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// 1. Função para calcular raiz quadrada
void calcularRaizQuadrada() {
    printf("\n=== CALCULAR RAIZ QUADRADA ===\n");
    double numero;
    printf("Digite um número: ");
    scanf("%lf", &numero);
    
    if (numero >= 0) {
        double raiz = sqrt(numero);
        printf("A raiz quadrada de %.2lf é: %.2lf\n", numero, raiz);
    } else {
        printf("Não é possível calcular raiz quadrada de número negativo!\n");
    }
}

// 2. Função para calcular o dobro
void calcularDobro() {
    printf("\n=== CALCULAR O DOBRO ===\n");
    double numero;
    printf("Digite um número: ");
    scanf("%lf", &numero);
    printf("O dobro de %.2lf é: %.2lf\n", numero, numero * 2);
}

// 3. Função para calcular potência
void calcularPotencia() {
    printf("\n=== CALCULAR POTÊNCIA ===\n");
    double base, expoente;
    printf("Digite a base: ");
    scanf("%lf", &base);
    printf("Digite o expoente: ");
    scanf("%lf", &expoente);
    printf("%.2lf elevado a %.2lf é: %.2lf\n", base, expoente, pow(base, expoente));
}

// 4. Função para converter segundos em horas, minutos e segundos
void converterSegundos() {
    printf("\n=== CONVERTER SEGUNDOS ===\n");
    int segundos;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);
    
    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int segs = segundos % 60;
    
    printf("%d segundos = %d horas, %d minutos e %d segundos\n", segundos, horas, minutos, segs);
}

// 5. Função para calcular área do triângulo
void areaTriangulo() {
    printf("\n=== ÁREA DO TRIÂNGULO ===\n");
    double base, altura;
    printf("Digite a base do triângulo: ");
    scanf("%lf", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%lf", &altura);
    double area = (base * altura) / 2;
    printf("A área do triângulo é: %.2lf\n", area);
}

// 6. Função para trocar valores de duas variáveis
void trocarValores() {
    printf("\n=== TROCAR VALORES ===\n");
    int X, Y;
    printf("Digite o valor de X: ");
    if (scanf("%d", &X) != 1) { printf("Entrada inválida!\n"); limparBuffer(); return; }
    printf("Digite o valor de Y: ");
    if (scanf("%d", &Y) != 1) { printf("Entrada inválida!\n"); limparBuffer(); return; }
    printf("Valores originais: X = %d, Y = %d\n", X, Y);
    
    // Troca usando variável temporária
    int temp = X;
    X = Y;
    Y = temp;
    
    printf("Valores trocados: X = %d, Y = %d\n", X, Y);
}

// 7. Função para gerar número aleatório
void numeroAleatorio() {
    printf("\n=== NÚMERO ALEATÓRIO ===\n");
    srand(time(NULL));
    int aleatorio = rand() % 100 + 1;
    printf("Número aleatório gerado: %d\n", aleatorio);
}

// 8. Função para converter quilômetros em milhas
void kmParaMilhas() {
    printf("\n=== CONVERTER KM PARA MILHAS ===\n");
    double km;
    printf("Digite a distância em quilômetros: ");
    scanf("%lf", &km);
    double milhas = km * 0.621371;
    printf("%.2lf km = %.2lf milhas\n", km, milhas);
}

// 9. Função para converter Celsius para Fahrenheit
void celsiusParaFahrenheit() {
    printf("\n=== CONVERTER CELSIUS PARA FAHRENHEIT ===\n");
    double celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);
    double fahrenheit = (celsius * 9/5) + 32;
    printf("%.2lf°C = %.2lf°F\n", celsius, fahrenheit);
}

// 10. Função para calcular tempo de viagem
void tempoViagem() {
    printf("\n=== TEMPO DE VIAGEM ===\n");
    double distancia, velocidade;
    printf("Digite a distância a percorrer (km): ");
    scanf("%lf", &distancia);
    printf("Digite a velocidade média (km/h): ");
    scanf("%lf", &velocidade);
    
    if (velocidade > 0) {
        double tempo = distancia / velocidade;
        int horas = (int)tempo;
        int minutos = (int)((tempo - horas) * 60);
        printf("Tempo de viagem: %d horas e %d minutos\n", horas, minutos);
    } else {
        printf("Velocidade deve ser maior que zero!\n");
    }
}

// 11. Função para calcular redução do tempo de vida do fumante
void tempoVidaFumante() {
    printf("\n=== REDUÇÃO DO TEMPO DE VIDA ===\n");
    int cigarrosDia, anosFumando;
    printf("Quantos cigarros fuma por dia: ");
    scanf("%d", &cigarrosDia);
    printf("Há quantos anos fuma: ");
    scanf("%d", &anosFumando);
    
    int totalCigarros = cigarrosDia * anosFumando * 365;
    int minutosPerdidos = totalCigarros * 10;
    double diasPerdidos = minutosPerdidos / (60.0 * 24.0);
    
    printf("Você perderá aproximadamente %.2lf dias de vida\n", diasPerdidos);
}

// 12. Função para calcular aumento de salário
void aumentoSalario() {
    printf("\n=== AUMENTO DE SALÁRIO ===\n");
    double salario, percentual;
    printf("Digite o salário atual: ");
    scanf("%lf", &salario);
    printf("Digite o percentual de aumento (%%): ");
    scanf("%lf", &percentual);
    
    double aumento = salario * (percentual / 100);
    double novoSalario = salario + aumento;
    
    printf("Valor do aumento: R$ %.2lf\n", aumento);
    printf("Novo salário: R$ %.2lf\n", novoSalario);
}

// 13. Função para converter horas em dias e horas
void converterHoras() {
    printf("\n=== CONVERTER HORAS PARA DIAS ===\n");
    int horas;
    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);
    
    int dias = horas / 24;
    int horasRestantes = horas % 24;
    
    printf("%d horas = %d dias e %d horas\n", horas, dias, horasRestantes);
}

// 14. Função para calcular média de três notas
void calcularMedia() {
    printf("\n=== CALCULAR MÉDIA ===\n");
    double nota1, nota2, nota3;
    printf("Digite a primeira nota (0-10): ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota (0-10): ");
    scanf("%lf", &nota2);
    printf("Digite a terceira nota (0-10): ");
    scanf("%lf", &nota3);
    
    if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10 && nota3 >= 0 && nota3 <= 10) {
        double media = (nota1 + nota2 + nota3) / 3;
        printf("A média das notas é: %.2lf\n", media);
    } else {
        printf("As notas devem estar entre 0 e 10!\n");
    }
}

// 15. Função para operações matemáticas básicas
void operacoesBasicas() {
    printf("\n=== OPERAÇÕES BÁSICAS ===\n");
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Soma: %d\n", num1 + num2);
    printf("Subtração: %d\n", num1 - num2);
    printf("Multiplicação: %d\n", num1 * num2);
    
    if (num2 != 0) {
        printf("Divisão inteira: %d\n", num1 / num2);
        printf("Resto da divisão: %d\n", num1 % num2);
    } else {
        printf("Divisão por zero não é permitida!\n");
    }
}

// 16. Função para calcular potência com inteiros
void potenciaInteira() {
    printf("\n=== POTENCIAÇÃO ===\n");
    int base, expoente;
    printf("Digite a base: ");
    if (scanf("%d", &base) != 1) { printf("Entrada inválida!\n"); limparBuffer(); return; }
    printf("Digite o expoente: ");
    if (scanf("%d", &expoente) != 1) { printf("Entrada inválida!\n"); limparBuffer(); return; }
    
    if (expoente >= 0) {
        long resultado = 1;
        for (int i = 0; i < expoente; i++) {
            resultado *= base;
        }
        printf("%d elevado a %d é: %ld\n", base, expoente, resultado);
    } else {
        double res = pow((double)base, expoente);
        printf("%d elevado a %d é: %.6lf\n", base, expoente, res);
    }
}

// 17. Função para calcular seno, cosseno e tangente
void funcoesTrigonometricas() {
    printf("\n=== FUNÇÕES TRIGONOMÉTRICAS ===\n");
    double angulo;
    printf("Digite o ângulo em graus: ");
    scanf("%lf", &angulo);
    
    double radianos = angulo * M_PI / 180.0;
    
    printf("Seno: %.4lf\n", sin(radianos));
    printf("Cosseno: %.4lf\n", cos(radianos));
    
    if (fabs(cos(radianos)) > 1e-10) {
        printf("Tangente: %.4lf\n", tan(radianos));
    } else {
        printf("Tangente: indefinida (cosseno = 0)\n");
    }
}

// 18. Função para calcular salário mensal
void salarioMensal() {
    printf("\n=== SALÁRIO MENSAL ===\n");
    double horasTrabalhadas, valorHora;
    printf("Digite a quantidade de horas trabalhadas por mês: ");
    scanf("%lf", &horasTrabalhadas);
    printf("Digite o valor da hora de trabalho: ");
    scanf("%lf", &valorHora);
    
    double salario = horasTrabalhadas * valorHora;
    printf("Salário mensal: R$ %.2lf\n", salario);
}

// 19. Função para ativar/desativar modo noturno
void modoNoturno() {
    printf("\n=== MODO NOTURNO ===\n");
    char resposta[10];
    printf("Deseja ativar o modo noturno? (s/n): ");
    if (scanf("%9s", resposta) != 1) { printf("Entrada inválida!\n"); limparBuffer(); return; }
    
    char c = tolower((unsigned char)resposta[0]);
    if (c == 's') {
        printf("Modo noturno ativado!\n");
    } else if (c == 'n') {
        printf("Modo noturno desativado!\n");
    } else {
        printf("Resposta inválida! Use 's' ou 'n'.\n");
    }
}

// 20. Função para calcular área e perímetro do quadrado
void quadrado() {
    printf("\n=== QUADRADO ===\n");
    double lado;
    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%lf", &lado);
    
    double area = lado * lado;
    double perimetro = 4 * lado;
    
    printf("Área: %.2lf\n", area);
    printf("Perímetro: %.2lf\n", perimetro);
}

// 21. Função para calcular área e perímetro da circunferência
void circunferencia() {
    printf("\n=== CIRCUNFERÊNCIA ===\n");
    double raio;
    printf("Digite o tamanho do raio: ");
    scanf("%lf", &raio);
    
    double area = M_PI * raio * raio;
    double perimetro = 2 * M_PI * raio;
    
    printf("Área: %.2lf\n", area);
    printf("Perímetro: %.2lf\n", perimetro);
}

// 22. Função para calcular perímetro do triângulo
void perimetroTriangulo() {
    printf("\n=== PERÍMETRO DO TRIÂNGULO ===\n");
    double lado1, lado2, lado3;
    printf("Digite o primeiro lado: ");
    scanf("%lf", &lado1);
    printf("Digite o segundo lado: ");
    scanf("%lf", &lado2);
    printf("Digite o terceiro lado: ");
    scanf("%lf", &lado3);
    
    if (lado1 > 0 && lado2 > 0 && lado3 > 0 && 
        lado1 + lado2 > lado3 && 
        lado1 + lado3 > lado2 && 
        lado2 + lado3 > lado1) {
        double perimetro = lado1 + lado2 + lado3;
        printf("Perímetro do triângulo: %.2lf\n", perimetro);
    } else {
        printf("Os lados fornecidos não formam um triângulo válido!\n");
    }
}

// 23. Função para exibir sucessor de um número
void sucessor() {
    printf("\n=== SUCESSOR ===\n");
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    printf("O sucessor de %d é: %d\n", numero, numero + 1);
}

// 24. Função para calcular expressão 2a × 3b
void expressao() {
    printf("\n=== EXPRESSÃO 2a × 3b ===\n");
    int a, b;
    printf("Digite o valor de a: ");
    if (scanf("%d", &a) != 1) { printf("Entrada inválida!\n"); limparBuffer(); return; }
    printf("Digite o valor de b: ");
    if (scanf("%d", &b) != 1) { printf("Entrada inválida!\n"); limparBuffer(); return; }
    int resultado = (2 * a) * (3 * b);
    printf("2a × 3b (com a=%d e b=%d) = %d\n", a, b, resultado);
}

// 25. Função para calcular soma de três variáveis
void somaTresVariaveis() {
    printf("\n=== SOMA DE TRÊS VARIÁVEIS ===\n");
    int a, b, c;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);
    printf("Soma: %d\n", a + b + c);
}

// 26. Função para calcular desconto em mercadoria
void descontoMercadoria() {
    printf("\n=== DESCONTO EM MERCADORIA ===\n");
    double preco, percentualDesconto;
    printf("Digite o preço da mercadoria: ");
    scanf("%lf", &preco);
    printf("Digite o percentual de desconto (%%): ");
    scanf("%lf", &percentualDesconto);
    
    double desconto = preco * (percentualDesconto / 100);
    double precoFinal = preco - desconto;
    
    printf("Valor do desconto: R$ %.2lf\n", desconto);
    printf("Preço a pagar: R$ %.2lf\n", precoFinal);
}

// 27. Função para calcular preço do aluguel de carro
void aluguelCarro() {
    printf("\n=== ALUGUEL DE CARRO ===\n");
    double kmPercorridos, diasAluguel;
    printf("Digite a quantidade de km percorridos: ");
    scanf("%lf", &kmPercorridos);
    printf("Digite a quantidade de dias de aluguel: ");
    scanf("%lf", &diasAluguel);
    
    double preco = (diasAluguel * 60) + (kmPercorridos * 0.15);
    printf("Preço total a pagar: R$ %.2lf\n", preco);
}

// 28. Função para comparar dois números
void compararNumeros() {
    printf("\n=== COMPARAR DOIS NÚMEROS ===\n");
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("%d é maior que %d\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d é menor que %d\n", num1, num2);
    } else {
        printf("Os números são iguais\n");
    }
}

// 29. Função para operações matemáticas completas
void operacoesCompletas() {
    printf("\n=== OPERAÇÕES COMPLETAS ===\n");
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Soma: %d\n", num1 + num2);
    printf("Diferença: %d\n", num1 - num2);
    printf("Produto: %d\n", num1 * num2);
    
    if (num2 != 0) {
        printf("Divisão inteira: %d\n", num1 / num2);
        printf("Resto da divisão: %d\n", num1 % num2);
    } else {
        printf("Divisão por zero não é permitida!\n");
    }
}

// 30. Função para calcular potência com resto
void potenciaResto() {
    printf("\n=== POTÊNCIA E RESTO ===\n");
    int num1, num2;
    printf("Digite o primeiro número: ");
    if (scanf("%d", &num1) != 1) { printf("Entrada inválida!\n"); limparBuffer(); return; }
    printf("Digite o segundo número: ");
    if (scanf("%d", &num2) != 1) { printf("Entrada inválida!\n"); limparBuffer(); return; }
    
    printf("Soma: %d\n", num1 + num2);
    printf("Diferença: %d\n", num1 - num2);
    printf("Produto: %d\n", num1 * num2);
    
    if (num2 != 0) {
        printf("Divisão inteira: %d\n", num1 / num2);
        printf("Resto: %d\n", num1 % num2);
        
        // Potenciação
        if (num2 >= 0) {
            long potencia = 1;
            for (int i = 0; i < num2; i++) {
                potencia *= num1;
            }
            printf("Potência: %ld\n", potencia);
        } else {
            double potencia = pow((double)num1, num2);
            printf("Potência (expoente negativo): %.6lf\n", potencia);
        }
    } else {
        printf("Divisão por zero não é permitida!\n");
    }
}

// 31. Função para verificar se número é positivo, negativo ou zero
void verificarSinal() {
    printf("\n=== VERIFICAR SINAL ===\n");
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    if (numero > 0) {
        printf("O número é positivo\n");
    } else if (numero < 0) {
        printf("O número é negativo\n");
    } else {
        printf("O número é zero\n");
    }
}

// 32. Função para encontrar o maior de três números
void maiorDeTres() {
    printf("\n=== MAIOR DE TRÊS NÚMEROS ===\n");
    int num1, num2, num3;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    
    int maior = num1;
    if (num2 > maior) maior = num2;
    if (num3 > maior) maior = num3;
    
    printf("O maior número é: %d\n", maior);
}

// 33. Função para verificar se número é par ou ímpar
void parOuImpar() {
    printf("\n=== PAR OU ÍMPAR ===\n");
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("O número %d é par\n", numero);
    } else {
        printf("O número %d é ímpar\n", numero);
    }
}

// 34. Função para classificar idade
void classificarIdade() {
    printf("\n=== CLASSIFICAR IDADE ===\n");
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    if (idade < 12) {
        printf("Criança\n");
    } else if (idade <= 17) {
        printf("Adolescente\n");
    } else if (idade <= 64) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }
}

// 35. Função para verificar aprovação
void verificarAprovacao() {
    printf("\n=== VERIFICAR APROVAÇÃO ===\n");
    double nota;
    printf("Digite a nota final (0-20): ");
    scanf("%lf", &nota);
    
    if (nota >= 10) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
}

// 36. Função para mostrar dia da semana
void diaDaSemana() {
    printf("\n=== DIA DA SEMANA ===\n");
    int dia;
    printf("Digite um número de 1 a 7: ");
    scanf("%d", &dia);
    
    switch (dia) {
        case 1: printf("Segunda-feira\n"); break;
        case 2: printf("Terça-feira\n"); break;
        case 3: printf("Quarta-feira\n"); break;
        case 4: printf("Quinta-feira\n"); break;
        case 5: printf("Sexta-feira\n"); break;
        case 6: printf("Sábado\n"); break;
        case 7: printf("Domingo\n"); break;
        default: printf("Dia inválido!\n"); break;
    }
}

// 37. Função para calculadora simples com switch
void calculadoraSwitch() {
    printf("\n=== CALCULADORA COM SWITCH ===\n");
    int num1, num2;
    char operador;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    switch (operador) {
        case '+':
            printf("Resultado: %d\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %d\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Resultado: %.2lf\n", (double)num1 / num2);
            } else {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
            printf("Operador inválido!\n");
            break;
    }
}

// 38. Função para verificar ano bissexto
void anoBissexto() {
    printf("\n=== ANO BISSEXTO ===\n");
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d é um ano bissexto\n", ano);
    } else {
        printf("%d não é um ano bissexto\n", ano);
    }
}

// 39. Função para mostrar conceito da nota
void conceitoNota() {
    printf("\n=== CONCEITO DA NOTA ===\n");
    double nota;
    printf("Digite a nota (0-20): ");
    scanf("%lf", &nota);
    
    if (nota >= 16 && nota <= 20) {
        printf("Excelente\n");
    } else if (nota >= 13 && nota <= 15) {
        printf("Bom\n");
    } else if (nota >= 10 && nota <= 12) {
        printf("Suficiente\n");
    } else if (nota >= 0 && nota < 10) {
        printf("Insuficiente\n");
    } else {
        printf("Nota inválida! Digite entre 0 e 20.\n");
    }
}

// 40. Função menu para cálculo de áreas
void menuAreas() {
    printf("\n=== MENU DE ÁREAS ===\n");
    int opcao;
    
    do {
        printf("\n1 - Calcular área do círculo\n");
        printf("2 - Calcular área do quadrado\n");
        printf("3 - Calcular área do triângulo\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1: {
                double raio;
                printf("Digite o raio do círculo: ");
                scanf("%lf", &raio);
                printf("Área do círculo: %.2lf\n", M_PI * raio * raio);
                break;
            }
            case 2: {
                double lado;
                printf("Digite o lado do quadrado: ");
                scanf("%lf", &lado);
                printf("Área do quadrado: %.2lf\n", lado * lado);
                break;
            }
            case 3: {
                double base, altura;
                printf("Digite a base do triângulo: ");
                scanf("%lf", &base);
                printf("Digite a altura do triângulo: ");
                scanf("%lf", &altura);
                printf("Área do triângulo: %.2lf\n", (base * altura) / 2);
                break;
            }
            case 4:
                printf("Saindo do menu...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 4);
}

// 41. Função para calcular aumento de salário (repetição do exercício 12)
void aumentoSalario2() {
    printf("\n=== AUMENTO DE SALÁRIO (2) ===\n");
    double salario, percentual;
    printf("Digite o salário atual: ");
    scanf("%lf", &salario);
    printf("Digite o percentual de aumento (%%): ");
    scanf("%lf", &percentual);
    
    double aumento = salario * (percentual / 100);
    double novoSalario = salario + aumento;
    
    printf("Valor do aumento: R$ %.2lf\n", aumento);
    printf("Novo salário: R$ %.2lf\n", novoSalario);
}

// 42. Função para calcular desconto (repetição do exercício 26)
void descontoMercadoria2() {
    printf("\n=== DESCONTO EM MERCADORIA (2) ===\n");
    double preco, percentualDesconto;
    printf("Digite o preço da mercadoria: ");
    scanf("%lf", &preco);
    printf("Digite o percentual de desconto (%%): ");
    scanf("%lf", &percentualDesconto);
    
    double desconto = preco * (percentualDesconto / 100);
    double precoFinal = preco - desconto;
    
    printf("Valor do desconto: R$ %.2lf\n", desconto);
    printf("Preço a pagar: R$ %.2lf\n", precoFinal);
}

// 43. Função para calcular tempo de viagem (repetição do exercício 10)
void tempoViagem2() {
    printf("\n=== TEMPO DE VIAGEM (2) ===\n");
    double distancia, velocidade;
    printf("Digite a distância a percorrer (km): ");
    scanf("%lf", &distancia);
    printf("Digite a velocidade média (km/h): ");
    scanf("%lf", &velocidade);
    
    if (velocidade > 0) {
        double tempo = distancia / velocidade;
        int horas = (int)tempo;
        int minutos = (int)((tempo - horas) * 60);
        printf("Tempo de viagem: %d horas e %d minutos\n", horas, minutos);
    } else {
        printf("Velocidade deve ser maior que zero!\n");
    }
}

// 44. Função para calcular aluguel de carro (repetição do exercício 27)
void aluguelCarro2() {
    printf("\n=== ALUGUEL DE CARRO (2) ===\n");
    double kmPercorridos, diasAluguel;
    printf("Digite a quantidade de km percorridos: ");
    scanf("%lf", &kmPercorridos);
    printf("Digite a quantidade de dias de aluguel: ");
    scanf("%lf", &diasAluguel);
    
    double preco = (diasAluguel * 60) + (kmPercorridos * 0.15);
    printf("Preço total a pagar: R$ %.2lf\n", preco);
}

// 45. Função para comparar dois números com if
void compararNumerosIf() {
    printf("\n=== COMPARAR DOIS NÚMEROS COM IF ===\n");
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("%d é maior que %d\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d é menor que %d\n", num1, num2);
    } else {
        printf("Os números são iguais\n");
    }
}

// 46. Função para operações com dois números inteiros
void operacoesInteiras() {
    printf("\n=== OPERAÇÕES COM INTEIROS ===\n");
    int num1, num2;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    
    printf("Soma: %d\n", num1 + num2);
    printf("Subtração: %d\n", num1 - num2);
    printf("Produto: %d\n", num1 * num2);
    
    if (num2 != 0) {
        printf("Quociente (divisão inteira): %d\n", num1 / num2);
        printf("Resto: %d\n", num1 % num2);
    } else {
        printf("Divisão por zero não é permitida!\n");
    }
}

// 47. Função para verificar se número é positivo, negativo ou zero
void verificarSinal2() {
    printf("\n=== VERIFICAR SINAL (2) ===\n");
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    if (numero > 0) {
        printf("O número é positivo\n");
    } else if (numero < 0) {
        printf("O número é negativo\n");
    } else {
        printf("O número é zero\n");
    }
}

// 48. Função para encontrar o maior de três números com if/else if
void maiorDeTresIfElse() {
    printf("\n=== MAIOR DE TRÊS NÚMEROS COM IF/ELSE ===\n");
    int num1, num2, num3;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    
    if (num1 >= num2 && num1 >= num3) {
        printf("O maior número é: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("O maior número é: %d\n", num2);
    } else {
        printf("O maior número é: %d\n", num3);
    }
}

// 49. Função para verificar se número é par ou ímpar com if/else
void parOuImparIfElse() {
    printf("\n=== PAR OU ÍMPAR COM IF/ELSE ===\n");
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("O número %d é par\n", numero);
    } else {
        printf("O número %d é ímpar\n", numero);
    }
}

// 50. Função para classificar idade com mensagens específicas
void classificarIdadeMensagens() {
    printf("\n=== CLASSIFICAR IDADE COM MENSAGENS ===\n");
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    if (idade < 12) {
        printf("Criança\n");
    } else if (idade >= 12 && idade <= 17) {
        printf("Adolescente\n");
    } else if (idade >= 18 && idade <= 64) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }
}

// 51. Função para verificar aprovação com if/else
void verificarAprovacaoIfElse() {
    printf("\n=== VERIFICAR APROVAÇÃO COM IF/ELSE ===\n");
    double nota;
    printf("Digite a nota final (0-20): ");
    scanf("%lf", &nota);
    
    if (nota >= 10) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
}

// 52. Função para mostrar dia da semana com switch
void diaDaSemanaSwitch() {
    printf("\n=== DIA DA SEMANA COM SWITCH ===\n");
    int dia;
    printf("Digite um número de 1 a 7: ");
    scanf("%d", &dia);
    
    switch (dia) {
        case 1: printf("Segunda\n"); break;
        case 2: printf("Terça\n"); break;
        case 3: printf("Quarta\n"); break;
        case 4: printf("Quinta\n"); break;
        case 5: printf("Sexta\n"); break;
        case 6: printf("Sábado\n"); break;
        case 7: printf("Domingo\n"); break;
        default: printf("Dia inválido!\n"); break;
    }
}

// 53. Função para calculadora com switch
void calculadoraComSwitch() {
    printf("\n=== CALCULADORA COM SWITCH ===\n");
    int num1, num2;
    char operador;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    switch (operador) {
        case '+':
            printf("Resultado: %d\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %d\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Resultado: %.2lf\n", (double)num1 / num2);
            } else {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
            printf("Operador inválido!\n");
            break;
    }
}

// 54. Função para verificar ano bissexto com regras completas
void anoBissextoCompleto() {
    printf("\n=== ANO BISSEXTO COMPLETO ===\n");
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    if (ano % 4 == 0) {
        if (ano % 100 == 0) {
            if (ano % 400 == 0) {
                printf("%d é um ano bissexto\n", ano);
            } else {
                printf("%d não é um ano bissexto\n", ano);
            }
        } else {
            printf("%d é um ano bissexto\n", ano);
        }
    } else {
        printf("%d não é um ano bissexto\n", ano);
    }
}

// 55. Função para mostrar conceito da nota com intervalos
void conceitoNotaIntervalos() {
    printf("\n=== CONCEITO DA NOTA COM INTERVALOS ===\n");
    double nota;
    printf("Digite a nota (0-20): ");
    scanf("%lf", &nota);
    
    if (nota >= 16 && nota <= 20) {
        printf("Excelente\n");
    } else if (nota >= 13 && nota < 16) {
        printf("Bom\n");
    } else if (nota >= 10 && nota < 13) {
        printf("Suficiente\n");
    } else if (nota >= 0 && nota < 10) {
        printf("Insuficiente\n");
    } else {
        printf("Nota inválida!\n");
    }
}

// 56. Função menu para cálculo de áreas com switch
void menuAreasSwitch() {
    printf("\n=== MENU DE ÁREAS COM SWITCH ===\n");
    int opcao;
    
    do {
        printf("\n1 - Calcular área do círculo\n");
        printf("2 - Calcular área do quadrado\n");
        printf("3 - Calcular área do triângulo\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1: {
                double raio;
                printf("Digite o raio do círculo: ");
                scanf("%lf", &raio);
                printf("Área do círculo: %.2lf\n", M_PI * raio * raio);
                break;
            }
            case 2: {
                double lado;
                printf("Digite o lado do quadrado: ");
                scanf("%lf", &lado);
                printf("Área do quadrado: %.2lf\n", lado * lado);
                break;
            }
            case 3: {
                double base, altura;
                printf("Digite a base do triângulo: ");
                scanf("%lf", &base);
                printf("Digite a altura do triângulo: ");
                scanf("%lf", &altura);
                printf("Área do triângulo: %.2lf\n", (base * altura) / 2);
                break;
            }
            case 4:
                printf("Saindo do menu...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 4);
}

// 57. Função adicional: calcular IMC
void calcularIMC() {
    printf("\n=== CALCULAR IMC ===\n");
    double peso, altura;
    printf("Digite o peso (kg): ");
    if (scanf("%lf", &peso) != 1 || peso <= 0) { printf("Peso inválido!\n"); limparBuffer(); return; }
    printf("Digite a altura (m): ");
    if (scanf("%lf", &altura) != 1 || altura <= 0) { printf("Altura inválida!\n"); limparBuffer(); return; }
    
    double imc = peso / (altura * altura);
    printf("Seu IMC é: %.2lf\n", imc);
}

// 58. Função adicional: calcular fatorial
void calcularFatorial() {
    printf("\n=== CALCULAR FATORIAL ===\n");
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("Não existe fatorial de número negativo!\n");
        return;
    }
    
    long fatorial = 1;
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    
    printf("O fatorial de %d é: %ld\n", numero, fatorial);
}

// 59. Função adicional: verificar número primo
void verificarPrimo() {
    printf("\n=== VERIFICAR NÚMERO PRIMO ===\n");
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    if (numero <= 1) {
        printf("%d não é primo\n", numero);
        return;
    }
    
    int primo = 1;
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            primo = 0;
            break;
        }
    }
    
    if (primo) {
        printf("%d é primo\n", numero);
    } else {
        printf("%d não é primo\n", numero);
    }
}

// Função principal
int main() {
    int opcao;
    
    printf("=== PROGRAMA COMPLETO EM C - TODOS OS 59 EXERCÍCIOS ===\n");
    printf("Desenvolvido para atender todos os requisitos da atividade\n");
    
    do {
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("0-59. Exercícios 0 a 59 (0 para sair)\n");
        printf("0. Sair\n");
        printf("Escolha uma opção (0-59): ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1: calcularRaizQuadrada(); break;
            case 2: calcularDobro(); break;
            case 3: calcularPotencia(); break;
            case 4: converterSegundos(); break;
            case 5: areaTriangulo(); break;
            case 6: trocarValores(); break;
            case 7: numeroAleatorio(); break;
            case 8: kmParaMilhas(); break;
            case 9: celsiusParaFahrenheit(); break;
            case 10: tempoViagem(); break;
            case 11: tempoVidaFumante(); break;
            case 12: aumentoSalario(); break;
            case 13: converterHoras(); break;
            case 14: calcularMedia(); break;
            case 15: operacoesBasicas(); break;
            case 16: potenciaInteira(); break;
            case 17: funcoesTrigonometricas(); break;
            case 18: salarioMensal(); break;
            case 19: modoNoturno(); break;
            case 20: quadrado(); break;
            case 21: circunferencia(); break;
            case 22: perimetroTriangulo(); break;
            case 23: sucessor(); break;
            case 24: expressao(); break;
            case 25: somaTresVariaveis(); break;
            case 26: descontoMercadoria(); break;
            case 27: aluguelCarro(); break;
            case 28: compararNumeros(); break;
            case 29: operacoesCompletas(); break;
            case 30: potenciaResto(); break;
            case 31: verificarSinal(); break;
            case 32: maiorDeTres(); break;
            case 33: parOuImpar(); break;
            case 34: classificarIdade(); break;
            case 35: verificarAprovacao(); break;
            case 36: diaDaSemana(); break;
            case 37: calculadoraSwitch(); break;
            case 38: anoBissexto(); break;
            case 39: conceitoNota(); break;
            case 40: menuAreas(); break;
            case 41: aumentoSalario2(); break;
            case 42: descontoMercadoria2(); break;
            case 43: tempoViagem2(); break;
            case 44: aluguelCarro2(); break;
            case 45: compararNumerosIf(); break;
            case 46: operacoesInteiras(); break;
            case 47: verificarSinal2(); break;
            case 48: maiorDeTresIfElse(); break;
            case 49: parOuImparIfElse(); break;
            case 50: classificarIdadeMensagens(); break;
            case 51: verificarAprovacaoIfElse(); break;
            case 52: diaDaSemanaSwitch(); break;
            case 53: calculadoraComSwitch(); break;
            case 54: anoBissextoCompleto(); break;
            case 55: conceitoNotaIntervalos(); break;
            case 56: menuAreasSwitch(); break;
            case 57: calcularIMC(); break;
            case 58: calcularFatorial(); break;
            case 59: verificarPrimo(); break;
            case 0: printf("Saindo... Obrigado por usar o programa!\n"); break;
            default: printf("Opção inválida! Digite um número entre 0 e 59.\n"); break;
        }
        
        if (opcao != 0) {
            printf("\nPressione Enter para continuar...");
            limparBuffer();
            getchar();
        }
        
    } while (opcao != 0);
    
    return 0;
}