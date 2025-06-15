# Visa-Mastercard-AmericanExpress

This is a simple Python program that validates credit card numbers and identifies the type of card based on standard number patterns and length.

Supported card types:

- 💳 Visa
- 💳 Mastercard
- 💳 American Express

## 🔍 How It Works

- The program prompts the user to input a credit card number.
- It checks:
  - If the number passes **Luhn’s Algorithm**
  - The **length** and **starting digits** to determine the card type
- Prints the result: `VISA`, `MASTERCARD`, `AMEX`, or `INVALID`

## 💻 Example
Number: 4003600000000014
VISA
