// selection sort
const selection = (arr) => {
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

console.log(selection([5, 1, 4, 7, 2, 6, 8, 3]));
