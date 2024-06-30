let char = "#";

const isAlphabet = /^[A-Za-z]$/;
const isDigit = /^[0-9]$/;

let result;

if (isAlphabet.test(char)) {
  result = "alphabet";
} else if (isDigit.test(char)) {
  result = "digit";
} else {
  result = "special character";
}
console.log(result);
