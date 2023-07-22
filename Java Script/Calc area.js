function calculateArea(length, width) {
  if (typeof length !== 'number' || typeof width !== 'number' || length <= 0 || width <= 0) {
    throw new Error('Length and width must be positive numbers.');
  }
  const area = length * width;
  return area;
}
