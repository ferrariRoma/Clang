function solution(rows, columns, queries) {
  const answer = [];
  const board = Array.from(new Array(rows + 1), () =>
    new Array(columns + 1).fill(0)
  );

  // 초기화
  for (let i = 1; i <= rows; i++) {
    for (let j = 1; j <= columns; j++) {
      board[i][j] = (i - 1) * columns + j;
    }
  }

  // 이동시작
  for (let q = 0; q < queries.length; q++) {
    const [x1, y1, x2, y2] = queries[q];
    const stack = [];

    for (let i = y1; i < y2; i++) stack.push(board[x1][i]);
    for (let i = x1; i < x2; i++) stack.push(board[i][y2]);
    for (let i = y2; i > y1; i--) stack.push(board[x2][i]);
    for (let i = x2; i > x1; i--) stack.push(board[i][y1]);

    answer.push(Math.min(...stack));
    const temp = stack.pop();
    stack.unshift(temp);

    for (let i = y1; i < y2; i++) board[x1][i] = stack.shift();
    for (let i = x1; i < x2; i++) board[i][y2] = stack.shift();
    for (let i = y2; i > y1; i--) board[x2][i] = stack.shift();
    for (let i = x2; i > x1; i--) board[i][y1] = stack.shift();
  }
  return answer;
}

solution(6, 6, [
  [2, 2, 5, 4],
  [3, 3, 6, 6],
  [5, 1, 6, 3],
]);
