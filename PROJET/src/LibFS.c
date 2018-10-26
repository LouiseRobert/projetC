#include "LibFS.h"
#include "Disque.h"

// 1 secteur contient 4 inodes
// variable errno pour gerer les erreurs
int osErrno;

typedef struct t_Inode {
  int typeFichier; // 0 si fichier standard, 1 si répertoire
  int tailleFichier; // taille du fichier en octet
  int tabPointeurs[30]; // tableau d'adresses vers les données
} inode;

typedef struct t_ligneRepertoire { 
  char nom[16]; // nom du fichier
  inode noInode; // numéro d'inode du fichier (?)
} ligneRepertoire;

typedef struct t_repertoire {
  ligneRepertoire* tablignes; // tableau des lignes du répertoire
} repertoire

typedef struct t_inode_bitmap { //index : numéro d'inode
  byte bitmapInode[2048]; // tableau de 512 octets (2048 bits)
} inode_bitmap

typedef struct t_data_bitmap { //index : numéro du bloc
  byte bitmapData[2048];
} data_bitmap

typedef struct t_superblock {
  byte padding[508]; // tableau vide de 508 bits
  int magicnumber; // le magic number occupe les bits 509,510,511,512 du superblock
} superblock


#define MAGICNUMBER  0xCAFECAFE;

int FS_Boot(char *path) {
  printf("FS_Boot %s\n", path);
    
  if (Disk_Init() == -1) {
    printf("Disk_Init() failed\n");
    osErrno = E_GENERAL;
    return -1;
  }


  

  return 0;
}

int FS_Sync()
{
  printf("FS_Sync\n");
  // TODO...
  return 0;
}


int File_Create(char *file)
{
  printf("FS_Create\n");
  // TODO...
  return 0;
}

int File_Open(char *file)
{
  printf("FS_Open\n");
  // TODO...
  return 0;
}

int File_Read(int fd, void *buffer, int size)
{
  printf("FS_Read\n");
  // TODO...
  return 0;
}

int File_Write(int fd, void *buffer, int size)
{
  printf("FS_Write\n");
  // TODO...
  return 0;
}

int File_Seek(int fd, int offset)
{
  printf("FS_Seek\n");
  // TODO...
  return 0;
}

int File_Close(int fd)
{
  printf("FS_Close\n");
  // TODO...
  return 0;
}

int File_Unlink(char *file)
{
  printf("FS_Unlink\n");
  // TODO...
  return 0;
}


// directory ops
int Dir_Create(char *path)
{
  printf("Dir_Create %s\n", path);
  return 0;
}

int Dir_Size(char *path)
{
  printf("Dir_Size\n");
  return 0;
}

int Dir_Read(char *path, void *buffer, int size)
{
  printf("Dir_Read\n");
  return 0;
}

int Dir_Unlink(char *path)
{
  printf("Dir_Unlink\n");
  return 0;
}
