# 2023-Algorithm-Study

๐ฃ๊ธฐ์ด ํํ ์๊ณ ๋ฆฌ์ฆ ์คํฐ๋ : ๋ฐฑ์ค

```
์ด๋ฆ(๋ฌธ์ ๋ฒํธ).cpp ์ด๋ฆ์ผ๋ก ์ฝ๋ ์ฌ๋ ค๋์ผ๋ฉด ๋ฉ๋๋ค.
```



๋ธ์ ํ์ด์ง[[๋ฐ๋ก๊ฐ๊ธฐ]](https://confusion-dragon-e94.notion.site/428f8e4b57cc430ea132ccc94b282831)๋ฅผ ๋ฐํ์ผ๋ก README.md๋ฅผ ์์ฑํ์์ต๋๋ค.

๋ชจ์ด๋ ์๊ฐ ์ ๊น์ง ์ฝ๋๋ ๊นํ๋ธ์ ์ฌ๋ ค์ฃผ์ธ์.
Issue์๋ ์ง๋ฌธ์ด๋ ์ข์ ์ ๋ณด ๋ฑ ๋ค์ํ ์ฃผ์ ๋ก ๋ผ๋ฒจ์ ๋ถ์ฌ์ ๋จ๊ฒจ์ฃผ์๋ฉด ์ข์ ๊ฑฐ ๊ฐ์์๐


## ์๊ณ ๋ฆฌ์ฆ ๋ฌธ์ 
---

10ํ์ฐจ ํ)  ์ฌ๊ท -> ํ,์คํ ->๋ธ๋ฃจํธํฌ์ค -> ๊ทธ๋ฆฌ๋ -> ์ด๋ถํ์ -> ๋์ ํฉ -> ๋ถํ ์ ๋ณต -> dp -> ๊ทธ๋ํ์ํ -> ๋ฐฑํธ๋ํน -> ์ต๋จ๊ฒฝ๋ก ====โ   ์ดํ ๋์ด๋๋ฅผ ์ฌ๋ ค์ ๋ค์ ๊ฐ๋๋ณ ํ์ต ์งํ ์์ ์๋๋ค.

| ํ์ฐจ | ๋ฌธ์ ์ ํ | ๋ฌธ์ ์ด๋ฆ | ๋ฌธ์ ์ด๋ฆ | ๋ฌธ์ ์ด๋ฆ | ๋ฌธ์ ์ด๋ฆ |
| --- | --- | --- | --- | --- | --- |
| 01 | ์์ถ๋ ฅ | [11720](https://www.acmicpc.net/problem/11720) | [9498](https://www.acmicpc.net/problem/9498) | [11655](https://www.acmicpc.net/problem/11655)  | [1313](https://www.acmicpc.net/problem/1316)  |
| 02 | ๋ฐฐ์ด | [2592](https://www.acmicpc.net/problem/2592)  | [1924](https://www.acmicpc.net/problem/1924) | [2846](https://www.acmicpc.net/problem/2846)  |  |
| 03 | set, ๊ธฐ๋ณธ์ํ | [10815](https://www.acmicpc.net/problem/10815) | [1193](https://www.acmicpc.net/problem/1193) | [10250](https://www.acmicpc.net/problem/10250) | [2839](https://www.acmicpc.net/problem/2839) |
| 04 | ์งํฉ๊ณผ ๋งต | [10816](https://www.acmicpc.net/problem/10816)   |  [14425](https://www.acmicpc.net/problem/14425) | [1764](https://www.acmicpc.net/problem/1764) | [11478](https://www.acmicpc.net/problem/11478) |
| 05 | ์์, ์๋ผํ ์คํ๋ค์ค์ ์ฒด | [1929](https://www.acmicpc.net/problem/1929) | [2581](https://www.acmicpc.net/problem/2581) | [4134](https://www.acmicpc.net/problem/2960)  | [4134](https://www.acmicpc.net/problem/4134)  |
| 06 | ์์ ์์ฉ | [4948](https://www.acmicpc.net/problem/4948) | [9020](https://www.acmicpc.net/problem/9020) |  |  |
| 07 | ์ ํด๋ฆฌ๋ ํธ์ ๋ฒ | [1934](https://www.acmicpc.net/problem/1934)  | [3036](https://www.acmicpc.net/problem/3036)   | [9613](https://www.acmicpc.net/problem/9613)  |  |
| 08 | ์ ๋ ฌ | [2750](https://www.acmicpc.net/problem/2750)  |  [2587](https://www.acmicpc.net/problem/2587)   | [25305](https://www.acmicpc.net/problem/25305)   |  |
| 09 | ์ ๋ ฌ |  [2108](https://www.acmicpc.net/problem/2108) | [1181](https://www.acmicpc.net/problem/1181)  | [1427](https://www.acmicpc.net/problem/1427) |  |
| 10 | ์ ๋ ฌ | [11650](https://www.acmicpc.net/problem/11650)  | [11651](https://www.acmicpc.net/problem/11651)   |  |  |
| 11 | ์ฌ๊ท | [10814](https://www.acmicpc.net/problem/10814) | [18870](https://www.acmicpc.net/problem/18870) |  |  |
| 12 | ์คํ ํ | [10872](https://www.acmicpc.net/problem/10872)   | [10870](https://www.acmicpc.net/problem/10870) | [17478](https://www.acmicpc.net/problem/17478) |  |
| 13 | ๋ฑ | [1874](https://www.acmicpc.net/problem/1874) | [1021](https://www.acmicpc.net/problem/1021) | [5430](https://www.acmicpc.net/problem/5430)  |  |
| 14 | ๋ธ๋ฃจํธํฌ์ค | [7568](https://www.acmicpc.net/problem/7568) | [1436](https://www.acmicpc.net/problem/1436)  | [3085](https://www.acmicpc.net/problem/3085) | [1254](https://www.acmicpc.net/problem/1254) |
| 15 | ๊ทธ๋ฆฌ๋ | [11047](https://www.acmicpc.net/problem/11047) | [11399](https://www.acmicpc.net/problem/11399)   | [1931](https://www.acmicpc.net/problem/1931) |  |
| 16 | ์ด๋ถํ์ | [1920](https://www.acmicpc.net/problem/1920)  | [1654](https://www.acmicpc.net/problem/1654) |  |  |
| 17 | ์ด๋ถํ์ | [2805](https://www.acmicpc.net/problem/2805) | [2110](https://www.acmicpc.net/problem/2110) |  |  |
| 18 | ๋์ ํฉ | [11659](https://www.acmicpc.net/problem/11659)  | [2559](https://www.acmicpc.net/problem/2559)  |  [11660](https://www.acmicpc.net/problem/11660) |  |
| 19 | dp | [24416](https://www.acmicpc.net/problem/24416) | [9461](https://www.acmicpc.net/problem/9461) |  |  |
| 20 | dp | [1904](https://www.acmicpc.net/problem/1904)  | [1912](https://www.acmicpc.net/problem/1912) |  |  |
| 22 | dp | [1463](https://www.acmicpc.net/problem/1463) | [1149](https://www.acmicpc.net/problem/1149)   |  |  |
| 23 | dp | [10844](https://www.acmicpc.net/problem/10844) |  [9251](https://www.acmicpc.net/problem/9251) |  |  |




## โผ๏ธ๊ท์น
---

1. ์คํฐ๋ ๋ชจ์์ ๋ถ์ฐธํ๊ฒ ๋  ๊ฒฝ์ฐ ์ต์ํ **ํ๋ฃจ ์ **์ **์ฌ์ ์** ํจ๊ป **๋จํก์ ๊ณต์ง**ํด์ฃผ์ธ์
(ํฉ๋นํ ์ด์  ์์ด ๋ถ์ฐธ 3ํ ์ด๊ณผ ์ ์คํฐ๋์์ ์ถ๋ฐฉ๋ฉ๋๋ค. ๊ฐ์ธํก ๊ณต์ง๋ **์ง์**ํฉ๋๋ค.)
2. 5๋ถ์ด์ ๋ฆ์ ์ ์ง๊ฐ์ฒ๋ฆฌ๋๋ฉฐ, ์ง๊ฐ 2ํ๋ 1ํ ๊ฒฐ์ ์ฒ๋ฆฌ๋ฉ๋๋ค. ์ง๊ฐ์ ๋ฒ๊ธ์ ๋ถ์ฌํฉ๋๋ค.
(๋ฒ๊ธ์ 5์ฒ์์๋๋ค. ๋ฒ๊ธ์ด ๋ชจ์์ง๋ค๋ฉด ๊ธ์ก์ ๋คํ์ด๋ ์ฌ์ฉํ๊ฒ ์ต๋๋ค ๐)
3. ๊ณผ์ ๋ ์ฃผ๊ฐ๋ฐฐํฌ์ง๋ง ๊ฒ์ฌ์ ๋ฐํ๋ ๋งค์ผ ์งํํฉ๋๋ค.
(๋ฌธ์ ๋ฅผ ์ ์ถ๋ง ํ  ์ ๋์จํด์ง ๊ฒฝ์ฐ๋ฅผ ๊ณ ๋ คํ์ฌ ๋งค์ผ ๊ฒ์ฌ์ ๋ฐํ๋ฅผ ์งํํ๋ ค ํฉ๋๋ค. )
