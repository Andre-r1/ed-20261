#include <stdio.h>
#include "selecao.h"

int busca_linear(int v[], int n, int valor) {
    for (size_t i = 0; i < n; i++) {
        if (v[i] == valor) {
            return (int)i; // índice do valor encontrado
        }
    }
    return -1; // Valor não encontrado
}

int quick_select(int v[], int n, int k) {
    if (k < 1 || k > n) {
        return -1; // Se k for inválido
    }

    int pivo = v[n / 2]; // Escolhe o pivô como o elemento do meio
    size_t left = 0, right = n - 1;

    while (left <= right) {
        while (v[left] < pivo) {
            left++;
        }
        while (v[right] > pivo) {
            right--;
        }
        if (left <= right) {
            // Troca os elementos
            int tempo = v[left];
            v[left] = v[right];
            v[right] = tempo;
            left++;
            right--;
        }
    }
    if (k - 1 < left) {
        return quick_select(v, left, k); // Busca na parte esquerda
    } else if (k - 1 > left) {
        return quick_select(v + left, n - left, k - left); // Busca na parte direita
    } else {
        return v[left]; // Retorna o k-ésimo menor elemento
    }
}