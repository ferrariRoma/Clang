/* function solution(arr) {
  const length = arr.length;
  let i, j, temp;
  for (i = 1; i < length; i++) {
    temp = arr[i];
    // 앞쪽부터 차곡차곡 정렬한다는 것을 잊지말자.
    // 해당되는 요소에만, 진행을 해준다.
    for (j = i - 1; j >= 0 && temp < arr[j]; j--) {
      arr[j + 1] = arr[j];
    }
    arr[j + 1] = temp;
  }
  console.log(arr);
  const answer = arr;
  return answer;
} */
const solution = (arr) => {
  let temp, i, j;
  for (i = 1; i < arr.length; i++) {
    temp = arr[i];
    for (j = i - 1; j >= 0 && temp < arr[j]; j--) {
      arr[j + 1] = arr[j];
    }
    arr[j + 1] = temp;
  }
  console.log(arr);
};
solution([5, 6, 1, 2, 4, 3]);
