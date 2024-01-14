function recursiveBinarySearch(list, value) {
  if (!list.length) {
    return false;
  }
  let first = 0;
  let last = list.length - 1;
  const middle = Math.floor((first + last) / 2);

  if (value === list[middle]) {
    return true;
  } else if (value < list[middle]) {
    return recursiveBinarySearch(list.slice(first, middle + 1), value);
  } else {
    return recursiveBinarySearch(list.slice(middle), value);
  }
}

list = Array.from(Array(20).keys());
console.log(Math.floor(7 / 2));

console.log("find index 14", recursiveBinarySearch(list, 14));
console.log("find 2 inside 1 - 5", recursiveBinarySearch([1, 2, 3, 4, 5], 2));
