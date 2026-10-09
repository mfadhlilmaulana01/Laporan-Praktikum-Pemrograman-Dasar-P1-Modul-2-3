radius = float(input("Masukkan jari-jari: "))
height = float(input("Masukkan tinggi bejana: "))
phi = 22/7

Volume = phi * radius ** 2 * height
area = 2 * phi * radius * (radius + height)
circumference = 2 * phi * radius

print(f"Volume: {Volume:.2f}")
print(f"Luas Permukaan: {area:.2f}")
print(f"Keliling Alas: {circumference:.2f}")