const originalObject = {
    property1: 'value1',
    property2: 'value2',
};

const loggingProxy = new Proxy(originalObject, {
    get: function (target, property, receiver) {
        console.log(`Accessed property: ${property}`);
        return Reflect.get(target, property, receiver);
    },
});

console.log(loggingProxy.property1);
console.log(loggingProxy.property2);
