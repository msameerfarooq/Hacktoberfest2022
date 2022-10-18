function EvenOrOdd(num) {
  if (typeof num != "number") return console.log("Not a number");
  if ((num % 2) === 0) {
    return console.log("Number is even")
  } else {
    return console.log("Number is odd");
  }
}
