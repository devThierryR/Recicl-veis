# ♻️ Seletor de Cores para Reciclagem

Este é um programa simples escrito em **C** que auxilia na identificação das cores das lixeiras de reciclagem com base no tipo de material selecionado. O diferencial deste projeto é o uso de **códigos de escape ANSI** para imprimir as mensagens diretamente com suas respectivas cores no terminal.

## 🚀 Funcionalidades
* Interface amigável via linha de comando.
* Suporte aos principais materiais: Plástico, Papel, Vidro, Metal e Orgânico.
* **Feedback Visual:** A resposta do console aparece na cor correspondente à lixeira (Ex: Mensagem em vermelho para plástico).

## 🛠️ Tecnologias Utilizadas
* **Linguagem C**
* **GCC** (Compilador)
* **ANSI Escape Codes** (Para estilização do texto)

## 📋 Como executar
Para rodar o programa localmente, você precisará de um compilador C instalado (como o GCC).

1. Clone o repositório:
   ```bash
   git clone https://github.com/devThierryR/Recicl-veis.git
   ```
2. Acesse a pasta do projeto:
   ```bash
   cd Recicl-veis
   ```
3. Compile o código:
   ```bash
   gcc -o reciclagem reciclagem.c
   ```
4. Execute o programa:
   ```bash
   ./reciclagem
   ```

## 🎨 Tabela de Correspondência
| Código | Material | Cor da Lixeira |
| :--- | :--- | :--- |
| 1 | Plástico | **Vermelha** |
| 2 | Papel | **Azul** |
| 3 | Vidro | **Verde** |
| 4 | Metal | **Amarela** |
| 5 | Orgânico | **Marrom** |

## 📖 O que eu aprendi
* Uso da estrutura condicional `switch-case` em C.
* Manipulação de entrada e saída com `scanf` e `printf`.
* Formatação de strings com caracteres especiais para cores no terminal.

---

### Dica para o seu código:
Aqueles códigos estranhos que você usou, como `\033[31m`, funcionam assim:
* **`\033[`** ou **`\x1b[`**: Inicia a sequência de escape.
* **`31m`**: Define a cor (31 é vermelho, 32 verde, etc).
* **`\033[0m`**: É o "reset", essencial para o terminal não continuar pintando tudo o que vier depois!
