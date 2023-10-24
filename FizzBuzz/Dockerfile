FROM ubuntu:latest AS cpp-build-base

RUN DEBIAN_FRONTEND="noninteractive" apt-get update && apt-get -y install tzdata

RUN apt-get update \
  && apt-get install -y ssh \
      build-essential \
      gcc \
      g++ \
      gdb \
      clang \
      make \
      ninja-build \
      cmake \
      autoconf \
      automake \
      locales-all \
      dos2unix \
      rsync \
      tar \
      python-is-python3 \
      libgtest-dev
RUN apt-get install -y libboost-all-dev
RUN apt-get clean

FROM cpp-build-base AS build

WORKDIR /src

COPY . .

RUN cmake . && make

FROM ubuntu:latest AS app

WORKDIR /opt/fizzbuzz

COPY --from=build /src/fizzbuzz ./

CMD ["./fizzbuzz", "100"]

FROM ubuntu:latest AS tests

WORKDIR /opt/fizzbuzz

COPY --from=build /src/Tests ./

CMD ["./google_tests_run"]
