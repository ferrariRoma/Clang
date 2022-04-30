/* const mergeSort = (arr) => {
  const length = arr.length;
  if (length < 2) return arr;
  const pivot = Math.floor(length / 2);
  const left = arr.slice(0, pivot);
  const right = arr.slice(pivot, length);
  // 이중 반복문을 쓰지 않는 버블정렬, 삽입정렬, 선택정렬과는 다르게
  // 재귀함수를 통해서 진행하기 때문에 성능이 가장 좋다.
  return merge(mergeSort(left), mergeSort(right));
};

function merge(leftArr, rightArr) {
  const answer = [];
  // const left = leftArr.length을 하면 안된다.
  while (leftArr.length && rightArr.length) {
    if (leftArr[0] >= rightArr[0]) {
      answer.push(rightArr.shift());
    } else {
      answer.push(leftArr.shift());
    }
  }
  while (leftArr.length) answer.push(leftArr.shift());
  while (rightArr.length) answer.push(rightArr.shift());
  return answer;
}

console.log(mergeSort([5, 2, 4, 7, 6, 1, 3, 8]));
 */
const mergeSort = (arr) => {
  if (arr.length < 2) return arr;
  const pivot = Math.floor(arr.length / 2);
  const leftArr = arr.slice(0, pivot);
  const rightArr = arr.slice(pivot, arr.length);
  return merge(mergeSort(leftArr), mergeSort(rightArr));
};

const merge = (leftArr, rightArr) => {
  const result = [];
  while (leftArr.length && rightArr.length) {
    if (leftArr[0] >= rightArr[0]) {
      result.push(rightArr.shift());
    } else {
      result.push(leftArr.shift());
    }
  }
  while (leftArr.length) result.push(leftArr.shift());
  while (rightArr.length) result.push(rightArr.shift());
  return result;
};

console.log(mergeSort([5, 2, 4, 7, 6, 1, 3, 8]));
