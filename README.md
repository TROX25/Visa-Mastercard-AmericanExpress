# Visa-Mastercard-AmericanExpress

This is a simple C program that validates credit card numbers and identifies the type of card based on known number patterns and Luhn’s Algorithm.

Supported card types:

- 💳 Visa
- 💳 Mastercard
- 💳 American Express

## 🔍 How It Works

- Prompts the user to enter a credit card number.
- Applies **Luhn’s Algorithm** to validate the number.
- Checks the **length** and **starting digits** to determine the card issuer.
- Prints one of the following results:
  - `VISA`
  - `MASTERCARD`
  - `AMEX`
  - `INVALID`

## 💻 Example
Number: 378282246310005
AMEX
