function solution(arr) {
  const crude = [...arr];
  for (let i = 1; i < arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
      if (crude[i] < crude[j]) {
        const temp = crude[i];
        crude[i] = crude[j];
        crude[j] = temp;
      }
    }
  }
  const answer = crude;
  console.log(answer);
  return answer;
}
solution([5, 6, 1, 2, 4, 3]);
