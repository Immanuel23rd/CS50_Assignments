#include <stdio.h>
#include <string.h>

// Function to convert binary to decimal
int binaryToDecimal(char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal = decimal * 2 + 1;
        } else if (binary[i] == '0') {
            decimal = decimal * 2;
        } else {
            printf("Invalid binary number!\n");
            return -1;
        }
    }
    
    return decimal;
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimal) {
    char hex[100];
    int i = 0;
    
    while (decimal != 0) {
        int temp = decimal % 16;
        
        if (temp < 10) {
            hex[i] = temp + '0';
        } else {
            hex[i] = temp + 'A' - 10;
        }
        
        decimal = decimal / 16;
        i++;
    }
    
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main() {
    char binary[100];
    
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    int decimal = binaryToDecimal(binary);
    
    if (decimal != -1) {
        decimalToHexadecimal(decimal);
    }
    
    return 0;
}
