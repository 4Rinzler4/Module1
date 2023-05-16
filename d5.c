#include <stdio.h>//підключення бібліотек
int main(){
float result = 1.0;//оголошення змінних
for(float i = 1.0; i <= 9.0; i++){
    result *= (i + (i * 0.1));
}//обчислення
printf("Результат: %.2f\n", result);//виведення результату
return 0;//кінець програми
}