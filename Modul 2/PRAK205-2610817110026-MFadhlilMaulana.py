height = int(input("Tinggi: "))
hypotenuse = int(input("Sisi miring: "))

base = int((hypotenuse ** 2 - height ** 2) ** 0.5)
area = int(0.5 * base * height)
circumference = int(hypotenuse + height + base)

print()
print(f"Alas: {base}cm")
print(f"tinggi: {height}cm")
print(f"Keliling: {circumference}cm")
print(f"Luas: {area}cm^2")