/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
     let currentCount = n - 1;
    return function() {
         currentCount += 1;
    return currentCount;  
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */