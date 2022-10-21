const { default: ms } = require('ms-prettify');

/**
 * 
 * @param {String} time time for which timer have to wait
 * @param {*} callback 
 * @param  {...any} args 
 * @returns 
 */
function timer(time, callback, ...args) {
    return new Promise((resolve, reject) => {
        time = ms(time);

        if (typeof (time) !== 'number' || time < 1) return reject("Invalid Time Was provided");

        setTimeout(() => {
            if (typeof callback === "function") callback(...args);

            resolve(true)
        }, time);
    })
}

timer("10s", () => console.timeEnd("1"));

timer("10 hours", (x) => console.log("Why are you still " + x), "here?");