FROM ubuntu:22.04 as builder

RUN apt update && apt install -fy gcc gcc-multilib

COPY guessme.c guessme.c

RUN gcc -m32 -static -o guessme guessme.c

FROM ubuntu:22.04

COPY --from=builder /guessme* /

CMD ["/guessme"]
