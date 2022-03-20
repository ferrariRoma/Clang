const fs = require("fs");
const filePath = process.platform === "linux" ? "/div/stdin" : "./input.txt";
let input = fs.readFileSync(filePath).toString().split("\n");

input = input[0];
input = input.split(" ").map((num) => +num);

solution(input[0], input[1]);
function solution(A, B) {
  console.log(A + B);
}
