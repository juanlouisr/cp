function minDifference(words) {
  let ret = [];

  for (let word in words) {
    ret.push(minDifferenceSingle(word));
  }
}


function minDifferenceSingle(word) {
  if (word.length % 2 !== 0) {
    return -1;
  }
  let first = word.substring(0, word.length / 2);
  let second = word.substring(word.length / 2, word.length);

  const map1 = new Map();
  const map2 = new Map();

  for (let c of first) {
    if (map1.get(c)) {
      map1.set(c, map1.get(c) + 1);
    } else {
      map1.set(c, 1);
    }
  }

  for (let d of second) {
    if (map2.get(d)) {
      map2.set(d, map2.get(d) + 1);
    } else {
      map2.set(d, 1);
    }
  }

  let ret = 0;

  map1.forEach((value, key) => {
    if (map2.get(key) && map2.get(key) > 0) {
      map2.set(key, map2.get(key) - value);
    } else {
      ret += value;
    }

  });

  map2.forEach((value) => {
    if (value < 0) {
      ret += -value;
    }
  })

  return ret;
}

console.log(minDifference("XYYX"));
