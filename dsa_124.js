let r = 3000,
  cost = 2500;
if (r - cost > 0) {
  console.log("profit");
} else if (r - cost < 0) {
  console.log("loss");
} else {
  console.log("no profit no loss");
}
