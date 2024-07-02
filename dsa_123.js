let a = 5;
let b = -3;
let c = 6;

let d = b * b - 4 * a * c;
let r1, r2;

if (d> 0) {
  r1 = (-b + Math.sqrt(d)) / (2 * a);
  r2 = (-b - Math.sqrt(d)) / (2 * a);
  console.log(`${r1},  ${r2}`);
} else if (d === 0) {
  r1 = r2 = -b / (2 * a);
  console.log(r1);
} else {
  r1 = -b / (2 * a);
  r2 = Math.sqrt(-d) / (2 * a);
  console.log(`${r1}, ${r2}`);
}
