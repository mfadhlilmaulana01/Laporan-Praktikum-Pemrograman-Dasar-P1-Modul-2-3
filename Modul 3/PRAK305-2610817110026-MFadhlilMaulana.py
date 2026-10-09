second = int(input("Masukkan detik: "))

day = second // (24 * 3600)
second_left = second % (24 * 3600)

hour = second_left // 3600
second_left %= 3600

minute = second_left // 60
second_left %= 60

if day <= 0:
    print(f"{hour:02d}:{minute:02d}:{second_left:02d}")
else:
    print(f"{day} hari {hour:02d}:{minute:02d}:{second_left:02d}")