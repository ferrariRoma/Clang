// selection sort
// 버블 정렬이 정렬된 뒤쪽을 절약하는 것처럼
// 선택 정렬은 정렬된 앞쪽을 절약하면 된다.
// 이렇게 하려면 둘 다 이중 반복문을 써야 하고
// 고로 둘 다 성능 똥망
/* const selection = (arr) => {
  const length = arr.length;
  for (let i = 0; i < length - 1; i++) {
    let min = i; // 최솟값 초기화
    for (let j = i + 1; j < length; j++) {
      if (arr[min] > arr[j]) {
        min = j; // 최솟값 인덱스 저장
      }
    }
    const temp = arr[min];
    arr[min] = arr[i]; // 최솟값이 있던 원래 자리에 앞쪽 수 저장
    arr[i] = temp; // 최솟값을 앞쪽으로 저장
  }
  return arr;
};

console.log(selection([5, 1, 4, 7, 2, 6, 8, 3])); */

const selection = (arr) => {
  let minIndex, i, j;
  for (i = 0; i < arr.length; i++) {
    minIndex = i;
    for (j = i + 1; j < arr.length; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j; // 최소값 저장
      }
    }
    const temp = arr[minIndex];
    arr[minIndex] = arr[i];
    arr[i] = temp;
  }
  const answer = arr;
  return answer;
};
console.log(selection([5, 1, 4, 7, 2, 6, 8, 3]));
