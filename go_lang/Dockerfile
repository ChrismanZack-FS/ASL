FROM golang:latest
WORKDIR /usr/src/app
COPY . .
RUN go build -o example example.go
CMD ["./hello"]
