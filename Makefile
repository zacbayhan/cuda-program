OBJS := main.o functions.o pthread.o #mycuda.o

EXECUTABLE := recomendations

SRCDIR := objFiles

# choose compiler:
# CC := mpiicc
CC := gcc

# choose flags:
# flags for Intel compiler icc on maya:
# CFLAGS := -O3 -std=c99 -Wall -mkl
# flags for Portland Group compiler pgcc on maya:
# CFLAGS := -O3 -c99 -Minform=warn -fastsse
# flags for GNU compiler gcc anywhere:
CFLAGS := -O3 -std=c99 -Wall -Wno-unused-variable

DEFS :=
INCLUDES :=
LDFLAGS := -lm

# Cuda specific files
NVCC := nvcc
CUDAFLAGS :=


# Build Rules
%.o: %.c %.h
	$(CC) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@

#%.o: %.cu %.h
	#$(NVCC) $(CUDAFLAGS) -c $< -o $@

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $(DEFS) $(INCLUDES) $(OBJS) -o $@ $(LDFLAGS)

clean:
	make
	-rm -f *.o
