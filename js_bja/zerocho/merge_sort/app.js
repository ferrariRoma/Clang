const mergeSort = (arr) => {
  if (arr.length < 2) return arr;
  const pivot = Math.floor(arr.length / 2);
  const leftArr = arr.slice(0, pivot);
  const rightArr = arr.slice(pivot, arr.length);
  return merge(mergeSort(leftArr), mergeSort(rightArr));
};

function merge(left, right) {
  const answer = [];
  // 둘 다 길이가 0이 아닐때
  while (left.length && right.length) {
    if (left[0] <= right[0]) {
      answer.push(left.shift());
    } else {
      answer.push(right.shift());
    }
  }
  // 하나가 0되고 나면 남은거 다 넣어주기.
  while (left.length) answer.push(left.shift());
  while (right.length) answer.push(right.shift());
  return answer;
}

console.log(mergeSort([5, 2, 4, 7, 6, 1, 3, 8]));
