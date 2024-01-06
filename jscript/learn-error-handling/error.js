try {
    // Trying to access a property of an undefined variable
    const value = undefinedVariable.property;
} catch (error) {
    if (error instanceof ReferenceError) {
        console.error('ReferenceError:', error.message);
    }
}
