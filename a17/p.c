#include <stdio.h>

int is_palindrome(int n) {
int original = n;
int reverse = 0;

while (n > 0) {
int digit = n % 10;
reverse = reverse * 10 + digit;
n /= 10;
}

return original == reverse;
}

int main() {
int largest_palindrome = 0;

for (int i = 100; i < 1000; i++) {
for (int j = i; j < 1000; j++) {
int product = i * j;
if (is_palindrome(product) && product > largest_palindrome) {
largest_palindrome = product;
}
}
}

FILE *file = fopen("102-result", "w");
if (file) {
fprintf(file, "%d", largest_palindrome);
fclose(file);
}

return 0;
}