function validateNumber(num) {
    if (typeof num !== 'number') {
        throw new Error('Input must be a number');
    }
    return num * 2;
}

try {
    const result = validateNumber('mike');
    console.log(result); // This line won't execute due to the error
} catch (error) {
    console.error('Validation error:', error.message);
}
