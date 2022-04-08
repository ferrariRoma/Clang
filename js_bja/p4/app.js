function solution(rows, columns, queries) {
  const answer = [];
  // 2차원 배열구성
  let arr = Array.from(new Array(rows + 1), () =>
    new Array(columns + 1).fill(0)
  );
  // 배열 초기화
  for (let i = 1; i <= rows; i++) {
    for (let j = 1; j <= columns; j++) {
      arr[i][j] = (i - 1) * columns + j;
    }
  }
  // 배열 이동
  for (let tc = 0; tc < queries.length; tc++) {
    const [x1, y1, x2, y2] = queries[tc];
    const stack = [];
    // 움직임과 동시에 push
    // 위는 x축 고정
    for (let i = y1; i < y2; i++) stack.push(arr[x1][i]);
    // 오른쪽은 y축 고정
    for (let i = x1; i < x2; i++) stack.push(arr[i][y1]);
    // 아래쪽은 x축 고정
    for (let i = y2; i > y1; i--) stack.push(arr[x2][i]);
    // 왼쪽은 y축 고정
    for (let i = x2; i > x1; i--) stack.push(arr[i][y2]);

    // 움직인 애들이 모인 stack에서 정답추출
    answer.push(Math.min(...stack));

    const temp = stack.pop(); // 뒤에껄 빼서
    stack.unshift(temp); // 앞에 넣어주기!
    // 한 칸씩 밀려서 움직이면 결국 맨 뒷값이 맨 앞으로 오게 되는 것이기 때문에!

    // 움직인 결과 넣어주기!
    // shift는 맨 앞 요소를 제거하고 해당 요소를 반환
    // 즉, stack에서 unshift를 통해서 움직인 결과를 만들어주고,
    // shift를 이용해서 그 결과를 해당자리 배열에 다시 할당!
    for (let i = y1; i < y2; i++) {
      arr[x1][i] = stack.shift();
    }
    for (let i = x1; i < x2; i++) {
      arr[i][y1] = stack.shift();
    }
    for (let i = y2; i > y1; i--) {
      arr[x2][i] = stack.shift();
    }
    for (let i = x2; i > x1; i--) {
      arr[i][y2] = stack.shift();
    }

    return answer;
  }
}

solution(6, 6, [
  [2, 2, 5, 4],
  [3, 3, 6, 6],
  [5, 1, 6, 3],
]);
